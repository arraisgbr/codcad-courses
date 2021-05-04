/*

https://neps.academy/br/course/10/lesson/281

*/

#include<iostream>

using namespace std;

int gui[112345];
int pts[112345];

int find(int g){
    if(gui[g] == g) return g;
    return gui[g] = find(gui[g]);
}

void join(int a, int b){
    int paia = find(a);
    int paib = find(b);

    if(paia == paib) return;

    if(pts[paia] > pts[paib]){
        gui[paib] = paia;
        pts[paia] += pts[paib]; 
    }
    else{
        gui[paia] = paib;
        pts[paib] += pts[paia];
    }
}


int main(){

    int n, m; cin >> n >> m;

    while(n != 0){
        for(int i = 1 ; i <= n ; i++){
            gui[i] = i;
            cin >> pts[i];
        }
        int op, a, b, gr = 1;
        int ans = 0;
        for(int i = 0 ; i < m ; i++){
            cin >> op >> a >> b;
            if(op == 1) join(a, b);
            else{
                gr = find(gr);
                a = find(a);
                b = find(b);
                if(pts[a] > pts[b] && gr == a) ans++;
                else if(pts[b] > pts[a] && gr == b) ans++; 
            }
        }
        cout << ans << endl;
        cin >> n >> m;
    }
}