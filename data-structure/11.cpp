 /*

https://neps.academy/br/course/10/lesson/283

*/

#include<iostream>

using namespace std;

int pai[112345];

int find(int banco){
    if(pai[banco] == banco) return banco;
    return pai[banco] = find(pai[banco]);
}

void join(int b1, int b2){
    pai[find(b1)] = find(b2);
}

int main(){

    int n, k; cin >> n >> k;
    char op;
    int b1, b2;

    for(int i = 1 ; i <= n ; i++) pai[i] = i;

    for(int i = 0 ; i < k ; i++){
        cin >> op >> b1 >> b2;
        if(op == 'F') join(b1, b2);
        else{
            if(find(b1) == find(b2)) cout << 'S' << endl;
            else cout << 'N' << endl;
        }
    }
}