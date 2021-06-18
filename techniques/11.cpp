/*

https://neps.academy/br/course/tecnicas-de-programacao-(codcad)/lesson/vei,-da-meu-troco

*/

#include<iostream>
#include<cstring>

using namespace std;

int moedas[1123];
int tab[1123];
int n;

int pd(int m){

    if(m == 0) return 1;

    if(m < 0) return 0;

    if(tab[m] >= 0) return tab[m];
    
    for(int i = 1 ; i <= n ; i++){
        if(pd(m - moedas[i])) return tab[m - moedas[i]] = 1;
    }

    return tab[m] = 0;
}

int main(){

    int m; cin >> n >> m;
    
    memset(tab, -1, sizeof(tab));

    for(int i = 1 ; i <= n ; i++) cin >> moedas[i];

    int ans = pd(m);

    if(ans) cout << "S" << endl;
    else cout << "N" << endl;

}