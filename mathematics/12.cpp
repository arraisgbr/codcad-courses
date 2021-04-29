/*

https://neps.academy/br/course/9/lesson/242

*/

#include<iostream>

#define ll long long

using namespace std;

ll n; 
ll crivo[11234567];

void isPrime(){
    for(ll i = 2 ; i <= n ; i++){
        if(crivo[i] == 0){
            for(ll j = 2 ; j*i <= n ; j++) crivo[j*i] = 1;
        }
    }
}

int main(){

    cin >> n;

    isPrime();

    for(ll i = 2 ; i <= n ; i++)
        if(crivo[i] != 1) cout << i << " ";

    cout << endl;
}