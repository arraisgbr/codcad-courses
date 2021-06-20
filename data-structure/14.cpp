/*

https://neps.academy/br/course/estruturas-de-dados-(codcad)/lesson/telemarketing

*/

#include<iostream>
#include<queue>

using namespace std;

int ans[1123];

int main(){

    priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>> v;
    int n, l; cin >> n >> l;

    for(int i = 1 ; i <= n ; i++) v.push(make_pair(0, i));
    
    for(int i = 0 ; i < l ; i++){
        int t; cin >> t;
        pair<int, int> atual = v.top();
        v.pop();
        int horaAtual = atual.first;
        int index = atual.second;
        ans[index]++;
        v.push(make_pair(horaAtual + t, index));
    }

    for(int i = 1 ; i <= n ; i++) cout << i << " " << ans[i] << endl;

}