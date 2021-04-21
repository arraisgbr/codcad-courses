/*

https://neps.academy/br/course/8/lesson/205

*/

#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main(){

    ll n, m;
    int t, a, b;
    vector<int> island[112345];

    cin >> n >> m;

    for(ll i = 0 ; i < m ; i++){
        cin >> t >> a >> b;
        if(t == 0) {
            int find = 0;
            for(auto x : island[a]){
                if(x == b){
                    find = 1;
                    break;
                }
            }
            cout << find << endl;
        }
        else{
            island[a].push_back(b);
            island[b].push_back(a);
        }
    }
}