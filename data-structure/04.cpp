/*

https://neps.academy/br/course/10/lesson/270

*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){

    vector<pair<int,int>> jogos;
    queue<char> oitavas;
    queue<char> quartas;
    queue<char> semis;
    queue<char> finais;

    for(char i = 'A' ; i <= 'P' ; i++) oitavas.push(i);

    for(int i = 0 ; i < 15 ; i++){
        int x, y; cin >> x >> y;
        jogos.push_back(make_pair(x, y));
    }

    auto it = jogos.begin();
    while(!oitavas.empty()){
        if(it->first > it->second){
            quartas.push(oitavas.front());
            oitavas.pop();
            oitavas.pop();
        }
        else{
            oitavas.pop();
            quartas.push(oitavas.front());
            oitavas.pop();
        }
        it++;
    }

    while(!quartas.empty()){
        if(it->first > it->second){
            semis.push(quartas.front());
            quartas.pop();
            quartas.pop();
        }
        else{
            quartas.pop();
            semis.push(quartas.front());
            quartas.pop();
        }
        it++;
    }

    while(!semis.empty()){
        if(it->first > it->second){
            finais.push(semis.front());
            semis.pop();
            semis.pop();
        }
        else{
            semis.pop();
            finais.push(semis.front());
            semis.pop();
        }
        it++;
    }

    if(it->first > it->second) cout << finais.front() << endl;
    else{
        finais.pop();
        cout << finais.front() << endl;
    }

}