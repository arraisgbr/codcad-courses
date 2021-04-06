/*

While you were studying at Neps Academy, you saw a problem named “Simple Power” 
and decided to read it. The problem asks you to read two real numbers and print one 
to the power of the other. Write a program that solves this problem.

Input
The input consists of only one line containing two real numbers, x and y.

Output
Your program must print a single number x^y, with four decimal places.

Constraints
0 ≤ x ≤ 10000
1 ≤ y ≤ 10
x^y ≤ 10⁹​​

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double x, y;

    cin >> x >> y;
    
    cout << setprecision(4) << fixed;
    cout << pow(x, y) << endl;

}