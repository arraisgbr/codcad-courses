/*

https://neps.academy/br/course/10/lesson/267

*/

#include<iostream>

using namespace std;

int main(){

    int n; cin >> n;
    cin.ignore();
    int count = 0;
    bool ok = true;
    for(int i = 0 ; i < n ; i++){
        string a;
        getline(cin, a);
        for(int j = 0 ; j < a.size() ; j++){
            if(a[j] == '{') count++;
            else if(a[j] == '}') count--;
            if(count < 0){
                ok = false;
                break;
            }
        }
    }

    if(ok && count == 0) cout << 'S' << endl;
    else cout << 'N' << endl;

}