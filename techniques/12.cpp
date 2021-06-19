/*

https://neps.academy/br/course/tecnicas-de-programacao-(codcad)/lesson/corredor

*/

#include<iostream>

using namespace std;

int main(){

    int n; cin >> n;
    int arr[50005];

    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    int maior = 0;
    int maiorTotal = 0;
    for(int i = 0 ; i < n ; i++){
        maior = max(0, maior + arr[i]);
        maiorTotal = max(maiorTotal, maior);
    }

    cout << maiorTotal << endl;
}