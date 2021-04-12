/*

Bea has just returned from Russia and has brought several Matryoshkas in the suitcase, 
those Russian dolls that stay inside each other. Being extremely organized, she keeps the dolls in 
her shelf, sorted from the smallest to the largest.

Her siblings, however, love to make her angry and, so, mess the doll sorting every time Bea leaves 
home. Because she is obsessed with the order of things, every time she gets home, Bea organize 
the dolls again.

As she is already tired of it, she decided that she will always reorganize them with as little 
effort as possible. For that, she will sort them as follows: she will collect every doll that is out 
of order and position them, one by one, in the correct position. If two dolls have the same size, 
their order doesn’t matter, and Bea always wants to collect the smallest quantity possible of the 
dolls.

Knowing that she will have to do that every time she gets home, she decided that she will make a 
program to help her find out which dolls she will collect.

Input
The input is composed of two lines. The first line has one number N: the number of dolls. 
The second has N integers: the size of the dolls in the order that her siblings left.

Output
Your program must output two lines. The first one must contain one single integer: the number of 
dolls that Bea will have to collect. The second must include, in ascending order, the size of each 
doll that will be collected.

Subtask 1 (30 points)
1 ≤ N ≤ 10⁵
All doll heights are distinct integers between 1 and N.

Subtask 2 (70 points)
1 ≤ N ≤ 10⁵
All doll heights are positive integers less than 10⁹
​
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int N; cin >> N;
    int cont = 0;
    int v1[112345], v2[112345];
    vector<int> ans;

    for(int i = 0 ; i < N ; i++){
        cin >> v1[i];
        v2[i] = v1[i];
    }

    sort(v2, v2+N);

    for(int i = 0 ; i < N ; i++){
        if(v1[i] != v2[i]){
            cont++;
            ans.push_back(v2[i]);
        }
    }

    if(!cont) cout << 0 << endl;
    else{
        cout << cont << endl;
        for(auto x : ans) cout << x << " ";
        cout << endl;
    }

}