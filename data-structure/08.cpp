#include<iostream>
#include<set>

using namespace std;

int main(){

    int a, b; cin >> a >> b;
    set<int> alice, beatriz;
    int aux, contA = 0, contB = 0;

    for(int i = 0 ; i < a ; i++){
        cin >> aux;
        alice.insert(aux);    
    }

    for(int i = 0 ; i < b ; i++){
        cin >> aux;
        beatriz.insert(aux);
    }

    for(auto it = alice.begin() ; it != alice.end() ; it++){
        if(beatriz.find(*it) == beatriz.end()) contA++; 
    }

    for(auto it = beatriz.begin() ; it != beatriz.end() ; it++){
        if(alice.find(*it) == alice.end()) contB++;
    }

    if(contB > contA) cout << contA << endl;
    else cout << contB << endl;

}