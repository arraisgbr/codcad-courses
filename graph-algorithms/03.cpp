/*

https://neps.academy/br/course/8/lesson/204

*/

#include <iostream>

using namespace std;

int main(){

    int m, n; cin >> m >> n;
    int ans = 0;
    char map[1123][1123];

    for(int i = 0 ; i < 1123 ; i++){
        for(int j = 0 ; j < 1123 ; j++) map[i][j] = '.';
    }

    for(int i = 1 ; i <= m ; i++){
        for(int j = 1 ; j <= n ; j++) cin >> map[i][j];
    }

    for(int i = 0 ; i <= m ; i++){
        for(int j = 0 ; j <= n ; j++){
            if(map[i][j] == '#'){
                if(map[i+1][j] == '.' || map[i-1][j] == '.' || 
                map[i][j+1] == '.' || map[i][j-1] == '.') ans++;
            }
        }
    }

    cout << ans << endl;

}