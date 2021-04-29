/*

https://neps.academy/br/course/9/lesson/239

*/

#include<iostream>
#include<vector>

#define ll long long

using namespace std;

ll mdc(ll a, ll b){
    return b == 0 ? a : mdc(b, a%b);
}

int main(){

    ll a, b, c, d;

    cin >> a >> b >> c >> d;

    ll mmc = (b * d) / mdc(b,d);
    a *= mmc / b;
    c *= mmc / d;

    ll num = a + c;
    ll denum = mmc;

    ll numMdc = mdc(num, denum);
    while(numMdc != 1){
        num /= numMdc;
        denum /= numMdc;
        numMdc = mdc(num, denum);
    }

    cout << num << " " << denum << endl;
 
}