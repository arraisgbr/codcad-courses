/*

https://neps.academy/br/course/10/lesson/274

*/

#include <iostream>
#include <vector>
#include <set>
#include <cstring>

using namespace std;

int main(){

    int n, m;
    int fila[51234];
    vector<int> ans;
    set<int> fora;
    int aux;

    memset(fila, 0, sizeof(fila));

    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> aux;
        fila[i] = aux;
    }

    cin >> m;
    for(int i = 0 ; i < m ; i++){
        cin >> aux;
        fora.insert(aux);
    }

    for(int i = 0 ; i < n ; i++)
        if(fora.find(fila[i]) == fora.end()) ans.push_back(fila[i]);

    for(auto x : ans) cout << x << " ";
    cout << endl;

}