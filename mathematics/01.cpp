/*

https://neps.academy/br/course/9/lesson/238

*/

#include <iostream>

using namespace std;

int main(){

    string n;
    cin >> n;
    int tam = n.length();
    int aux;

    // 2
    aux = n[tam-1] - '0';
    if(aux % 2 == 0) cout << 'S' << endl;
    else cout << 'N' << endl;

    // 3
    aux = 0;
    for(int i = 0 ; i < tam ; i++) aux += n[i] - '0';
    if(aux % 3 == 0) cout << 'S' << endl;
    else cout << 'N' << endl;

    // 5
    if(n[tam-1] == '0' || n[tam-1] == '5') cout << 'S' << endl;
    else cout << 'N' << endl;
}