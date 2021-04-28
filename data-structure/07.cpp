/*

https://neps.academy/br/course/10/lesson/278

*/

#include<iostream>
#include<set>

using namespace std;

int main(){

    int n; cin >> n;
    set<int> students;
    int aux;

    for(int i = 0 ; i < n ; i++){
        cin >> aux;
        students.insert(aux);
    }

    cout << students.size() << endl;

}