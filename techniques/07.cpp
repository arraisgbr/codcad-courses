/*

https://neps.academy/br/course/7/lesson/174

*/

#include <iostream>
#include <vector>

#define ll long long

using namespace std;

void merge_sort(vector<ll> &vec){
    if(vec.size() == 1) return;
    
    vector<ll> v1, v2;

    for(int i = 0 ; i < vec.size() / 2 ; i++) v1.push_back(vec[i]);
    for(int i = vec.size()/2 ; i < vec.size() ; i++) v2.push_back(vec[i]);

    merge_sort(v1);
    merge_sort(v2);

    v1.push_back(INT_FAST32_MIN);
    v2.push_back(INT_FAST32_MIN);
    
    int n1 = 0, n2 = 0;
    for(int i = 0 ; i < vec.size() ; i++){
        if(v1[n1] > v2[n2]){
            vec[i] = v1[n1];
            n1++;
        }
        else{
            vec[i] = v2[n2];
            n2++;
        }
    }
}

int main(){

    int n;
    int aux;
    vector<ll> vec;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        cin >> aux;
        vec.push_back(aux);
    }

    merge_sort(vec);

    for(auto x : vec) cout << x << " ";

    cout << endl;
}