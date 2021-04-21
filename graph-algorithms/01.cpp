#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(){

    int teste = 1;
    int a, v;
    int x, y;
    int aero[102];
    vector<int> ans;

    cin >> a >> v;
    while(a != 0){

        memset(aero, 0, sizeof(aero));

        for(int i = 0 ; i < v ; i++){
            cin >> x >> y;
            aero[x]++;
            aero[y]++;
        }

        int maior = INT_LEAST16_MIN;

        for(int i = 1 ; i <= a ; i++){
            if(aero[i] > maior) maior = aero[i];
        }

        for(int i = 1 ; i <= a ; i++){
            if(aero[i] == maior) ans.push_back(i);
        }

        cout << "Teste " << teste++ << endl;
        for(auto x : ans) cout << x << " ";
        cout << endl << endl;

        ans.clear();

        cin >> a >> v;

    }

}