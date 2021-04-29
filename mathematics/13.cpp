/*

https://neps.academy/br/course/9/lesson/245

*/

#include<iostream>
#include<vector>

#define ll long long

using namespace std;

ll n;
ll crivo[12000010]; 

void isPrime(){
    crivo[1] = 1;
    for(int i = 2 ; i <= 12000000 ; i++){
        if(crivo[i] == 0){
            for(int j = 2 ; j * i <= 12000000 ; j++) crivo[i*j] = 1;
        }
    }
}

int main(){

    vector<int> prime;

    cin >> n;

    isPrime();

    for(int i = 2 ; i <= 12000000 ; i++){
        if(crivo[i] == 0) prime.push_back(i);
    }

    cout << prime[n-1] << endl;

}