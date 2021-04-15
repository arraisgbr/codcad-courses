/*

Martians ogres, as you all know, are powerful.I n a Martian circus fair, ogres are called to hit a 
hammer on a device that measures their strength. The ogre wins a certain prize depending on the 
strength range he reached (for example, if the strength reached was between 0 and 5, he gets 10 
points. If it is between 6 and 10, it wins 30). N awards are possible, for N force ranges achieved.

You must write a program that receives the force ranges and their respective awards. 
Then the program gets the strength achieved by M ogres, and you have to calculate how much each 
ogre received from the awards.

Input
The input contains a single set of tests, which must be read from the standard input device 
(usually the keyboard).

The first line contains two integers N and M, representing respectively the number of prize 
ranges and the number of ogres whose strength was measured.

The second line of a test case contains N-1 integers Ai. The first prize range is given by forces 
less than A1. The i-th prize range is made up of the forces that are greater than or equal to A{i-1}
and less than A​i. The n-th prize range is comprised of forces greater than or equal to A{N-1}.

The third line contains N integers F​i in ascending order, representing the award of each payout 
range, in that order.

The fourth and last line of a test case contains MM integers O​i, one for each ogre, representing what 
force each ogre achieved.

Output
Your program must print, in the standard output, a single line, containing M integers, one for each 
ogre, in the order given by the input, representing which prize each ogre received for his strength 
achieved.

Constraints
2 ≤ N ≤ 10⁵
​1 ≤ M ≤ 10000
1 ≤ Ai ≤ 10⁹
​​A{i-1} < Ai < A_{i+1}
​​1 ≤ Fi ≤ 1.000.000.000
F{i-1} < Fi < F{i+1}
1 ≤ 1.000.000.0001 ≤ Oi

*/

#include <iostream>
#include <vector>

using namespace std;

int n, m;
int range[112345];
int award[112345];
int ogres[11234];

int bs(int str){
    int start = 0, end = n;

    while(end - start > 1){
        int mid = (start + end) / 2;
        if(str >= range[mid]) start = mid;
        else end = mid;
    }

    return award[end-1];

}

int main(){

    vector<int> ans;

    cin >> n >> m;

    range[0] = 0;
    range[n-1] = INT8_MAX;
    for(int i = 1 ; i < n ; i++) cin >> range[i];
    for(int i = 0 ; i < n ; i++) cin >> award[i];
    for(int i = 0 ; i < m ; i++) cin >> ogres[i];

    for(int i = 0 ; i < m ; i++) ans.push_back(bs(ogres[i]));
    for(auto it = ans.begin() ; it != ans.end() ; it++) cout << *it << " ";

    cout << endl;

}