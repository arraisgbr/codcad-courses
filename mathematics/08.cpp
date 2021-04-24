/*

https://neps.academy/br/course/9/lesson/241

*/

#include <iostream>

#define ll long long

using namespace std;

bool prime(ll n){
    for(ll i = 2 ; i*i <= n ; i++) if(n % i == 0) return false;

    return true;
}

int main(){

    ll n; cin >> n;

    if(prime(n)) cout << 'N' << endl;
    else cout << 'S' << endl;

}