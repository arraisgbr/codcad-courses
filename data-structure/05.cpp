/*

https://neps.academy/br/course/10/lesson/273

*/

#include<iostream>
#include<stack>

using namespace std;

int main(){

    int t; cin >> t;

    for(int i = 0 ; i < t ; i++){
        stack<char> cadeia;
        string a; cin >> a;
        bool ok = true;
        for(int j = 0 ; j < a.size() ; j++){
            if(a[j] == '(' || a[j] == '{' || a[j] == '[') 
                cadeia.push(a[j]);
            else if(!cadeia.empty()){
                if((a[j] == ')' && cadeia.top() == '(') || 
                    (a[j] == ']' && cadeia.top() == '[') ||
                    (a[j] == '}' && cadeia.top() == '{')){
                        cadeia.pop();
                }
                else{
                    ok = false;
                    break;
                }
            }
        }
        if(!ok || !cadeia.empty())
            cout << 'N' << endl;
        else 
            cout << 'S' << endl;
    }
}