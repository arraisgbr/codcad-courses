#include <iostream>

using namespace std;

int main(){

    int aux;
    string n;
    cin >> n;
    int tam = n.length();
    
    if(tam == 1 && n[0] == '0') cout << 'S' << '\n' << 'S' << '\n' << 'S' << '\n';
    else if(tam >= 2){
        // 4
        aux = 10 * (n[tam-2] - '0');
        aux += n[tam-1] - '0';
        if(aux % 4 == 0) cout << 'S' << endl;
        else cout << 'N' << endl;

        // 9
        aux = 0;
        for(int i = 0 ; i < tam ; i++) aux += n[i] - '0';
        if(aux % 9 == 0) cout << 'S' << endl;
        else cout << 'N' << endl;

        // 25
        aux = 0;
        aux = 10 * (n[tam-2] - '0');
        aux += n[tam-1] - '0';
        if(aux % 25 == 0) cout << 'S' << endl;
        else cout << 'N' << endl;
    }
    else{
        // 4
        aux = n[0] - '0';
        if(aux % 4 == 0) cout << 'S' << endl;
        else cout << 'N' << endl;

        // 9
        aux = n[0] - '0';
        if(aux % 9 == 0) cout << 'S' << endl;
        else cout << 'N' << endl;

        // 25
        cout << 'N' << endl;
    }

}