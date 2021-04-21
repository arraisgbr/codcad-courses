/*

https://neps.academy/br/course/9/lesson/234

*/

#include <iostream>

using namespace std;

int main(){

    string n;
    cin >> n;
    int aux1 = 0;
    int aux2 = 0;

    int tam = n.length();

    if(tam == 1 && n[0] == '0') cout << 'S' << endl;
    else if(tam == 1) cout << 'N' << endl;
    else{
        for(int i = 0 ; i < tam ; i++){
            if(i % 2 == 0) aux1 += n[i] - '0';
            else aux2 += n[i] - '0';
        }
        if((aux1 - aux2) % 11 == 0) cout << 'S' << endl;
        else cout << 'N' << endl;
    }

}