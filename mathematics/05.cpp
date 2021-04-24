/*

https://neps.academy/br/course/9/lesson/235

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n; cin >> n;
    int x1, y1, x2, y2;
    int ans = 0;

    for(int i = 0 ; i < n ; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        int aux = pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2);
        ans += aux;
    }

    cout << ans << endl;
}