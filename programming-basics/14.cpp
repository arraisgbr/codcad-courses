/*

Given an integer number X, find all the divisors of X.

Input
The input consists of only one line containing the number X.

Output
Your program output should contain only one line with the divisors of X separated by a blank space. 
The divisors should be printed in ascending order.

Constraints
0 < X ≤ 10⁴
​​
*/

#include <iostream>

using namespace std;

int main(){

    int X;

    cin >> X;

    for(int i = 1 ; i <= X ; i++){
        if(X % i == 0) cout << i << " ";
    }

    cout << endl;

}