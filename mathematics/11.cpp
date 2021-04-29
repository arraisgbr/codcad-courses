/*

https://neps.academy/br/course/9/lesson/246

*/

#include<iostream>

#define ll long long

using namespace std;

int mdc(ll a, ll b){
    return b == 0 ? a : mdc(b, a % b);
}

int main(){

    int n; cin >> n;
    ll arr[112345];

    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    for(int i = 1 ; i < n ; i++) arr[i] = mdc(arr[i-1], arr[i]);

    cout << arr[n-1] << endl;
}