/*

https://neps.academy/br/exercise/273

*/

#include<iostream>
#include<queue>

using namespace std;

int main(){

    priority_queue<int, vector<int>, greater<int>> caixas;
    int n, c; cin >> c >> n;
    int ans = 0;

    for(int i = 0 ; i < c ; i++) caixas.push(0);

    for(int i = 0 ; i < n ; i++){
        int t, d;
        cin >> t >> d;
        int horaAtual = max(t, caixas.top());
        if(horaAtual - t > 20) ans++;
        caixas.pop();
        caixas.push(horaAtual + d);
    }

    cout << ans << endl;
}