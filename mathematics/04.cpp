/*

https://neps.academy/br/course/9/lesson/237

*/

#include <iostream>

using namespace std;

int main(){

    int q1[2][2], q2[2][2];

    cin >> q1[0][0] >> q1[0][1] >> q1[1][0] >> q1[1][1];
    cin >> q2[0][0] >> q2[0][1] >> q2[1][0] >> q2[1][1];

    if(q1[0][0] > q2[1][0] || q1[1][0] < q2[0][0] || q1[0][1] > q2[1][1] || q1[1][1] < q2[0][1])
        cout << 0 << endl;
    else cout << 1 << endl;
     
}