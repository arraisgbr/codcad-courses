/*

https://neps.academy/br/course/10/lesson/268

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n, t; cin >> n >> t;
    vector<pair<int, string>> alunos;
    vector<string> times[1123];
    
    for(int i = 0 ; i < n ; i++){
        string nome; int hab;
        cin >> nome >> hab;
        alunos.push_back(make_pair(hab, nome));
    };

    sort(alunos.begin(), alunos.end());

    int numTime = 1;
    for(int i = alunos.size() - 1 ; i >= 0 ; i--){
        times[numTime++].push_back(alunos[i].second);
        if(numTime > t) numTime = 1;
    }

    for(int i = 1 ; i <= t ; i++){
        cout << "Time " << i << endl;
        sort(times[i].begin(), times[i].end());
        for(int j = 0 ; j < times[i].size() ; j++) cout << times[i][j] << endl; 
        cout << endl;
    }
}