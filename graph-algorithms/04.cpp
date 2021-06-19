/*

https://neps.academy/br/course/algoritmos-em-grafos-(codcad)/lesson/gincana-(obi-2011)

*/

#include<iostream>
#include<vector>

using namespace std;

int visited[1123];
vector<int> nodes[1123];

void dfs(int v){
    visited[v] = 1;
    for(auto x : nodes[v]){
        if(!visited[x]) dfs(x);
    }
}

int main(){

    int n, m; cin >> n >> m;
    int numTimes = 0;

    for(int i = 0 ; i < m ; i++){
        int x, y; cin >> x >> y;
        nodes[x].push_back(y);
        nodes[y].push_back(x);
    }

    for(int i = 1 ; i <= n ; i++){
        if(!visited[i]){
            dfs(i);
            numTimes++;
        }
    }

    cout << numTimes << endl;

}   