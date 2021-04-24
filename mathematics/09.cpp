/*

https://neps.academy/br/course/9/lesson/244

*/

#include <iostream>
#include <vector>

#define ll long long

using namespace std;

bool prime(ll n){
    if(n == 1 || n == 0) return false;

    for(ll i = 2 ; i * i <= n ; i++) if(n % i == 0) return false;

    return true;
}

int main(){
    ll num; cin >> num;
    vector<int> ans;

    for(ll i = 1 ; i <= num ; i++) if(prime(i)) ans.push_back(i);

    for(auto x : ans) cout << x << " ";

    cout << endl;
}