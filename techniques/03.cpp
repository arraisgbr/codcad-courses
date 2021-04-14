/*

Task: Given a set of coins S with different values. What is the minimum amount of coins needed to 
represent the value V?

In this exercise we will always consider S = {1, 5, 10, 25, 50, 100}.

Example: To the given S and V = 235 we need 4 coins. 2 coins with value 100, 1 coin with value 25 
and 1 coin with value 10.

Input
The input contains a single number representing V.

Output
Your program should print the smallest number of coins needed to represent V.

Constraints
1 ≤ N ≤ 1000000

*/

#include <iostream>

using namespace std;

int main(){

    int s[] = {1, 5, 10, 25, 50, 100};
    int v; cin >> v;
    int moedas, total = 0;

    for(int i = 5 ; i >= 0 ; i--){
        moedas = v / s[i];
        v -= s[i] * moedas;
        total += moedas;
    }

    cout << total << endl;
}