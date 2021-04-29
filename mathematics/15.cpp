/*

https://neps.academy/br/course/9/lesson/249

*/

#include<iostream>

using namespace std;

int main(){

    int n; cin >> n;
    int arr[112345];

    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    for(int i = 1 ; i < n ; i++) arr[i] |= arr[i-1];

    cout << arr[n-1] << endl;

}