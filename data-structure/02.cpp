/*

https://neps.academy/br/course/10/lesson/269

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;


int main(){

    int p, s; cin >> p >> s;
    int praia[11234];
    vector<pair<int, int>> sorv;
    vector<int> ans;

    memset(praia, 0, sizeof(praia));

    for(int i = 0 ; i < s ; i++){
        int ini, fim;
        cin >> ini >> fim;
        sorv.push_back(make_pair(ini, fim));
    }

    sort(sorv.begin(), sorv.end());

    int ini = sorv[0].first;
    praia[sorv[0].first] = 1;
    int fim = sorv[0].second;
    praia[sorv[0].second] = 1;

    for(int i = 0 ; i < s ; i++){
        if(sorv[i].first <= fim && sorv[i].second > fim){
            praia[fim] = 0;
            fim = sorv[i].second;
            praia[fim] = 1;
        }
        else if(sorv[i].first > fim){
            ini = sorv[i].first;
            praia[ini] = 1;
            fim = sorv[i].second;
            praia[fim] = 1;
        }
    }

    for(int i = 0 ; i <= p ; i++) 
        if(praia[i] == 1) ans.push_back(i);

    for(int i = 0 ; i < ans.size()-1 ; i+=2)
        cout << ans[i] << " " << ans[i+1] << endl; 

}