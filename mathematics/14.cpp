/*

https://neps.academy/br/course/9/lesson/240

*/

#include<iostream>

#define ll long long
#define MAXN 13000010

using namespace std;

ll crivo[MAXN];

void isPrime(){
    crivo[1] = -1;
    for(int i = 2 ; i*i <= MAXN ; i++){
        if(crivo[i] == 0){
            for(int j = 2 ; j * i <= MAXN ; j++) crivo[j * i] = -1;
        }
    }
}

int main(){

    int q, aux, count = 1;
    cin >> q;

    isPrime();

    for(int i = 2 ; i <= MAXN ; i++){
        if(crivo[i] == 0){
            crivo[i] = count;
            count++;
        }

    }

    for(int i = 0 ; i < q ; i++){
        cin >> aux;
        cout << crivo[aux] << endl;
    }

}