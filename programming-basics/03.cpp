/*

Make a program to read two integer values A and B and print the integer average of the values A and B.

Input
The input consists of two lines. The first line contains the integer A 
and the second line contains the integer B.

Output
The output consists of a line containing the integer average of A and B.

Constraints
The given integers have no absolute value higher than 1000.

*/

#include <iostream>

using namespace std;

int main(){

    int A, B;

    cin >> A >> B;

    cout << (A + B) / 2 << endl;
}

