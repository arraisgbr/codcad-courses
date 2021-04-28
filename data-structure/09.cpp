/*

https://neps.academy/br/course/10/lesson/277

*/

#include<iostream>
#include<set>

using namespace std;

int main(){

    int consultas; cin >> consultas;
    set<int> tacos;
    int c, numTacos = 0;
    for(int i = 0 ; i < consultas ; i++){
        cin >> c;
        if(tacos.find(c) == tacos.end()){
            tacos.insert(c);
            numTacos += 2;
        }
        else tacos.erase(c);
    }

    cout << numTacos << endl;
    
}