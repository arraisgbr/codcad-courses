/*

Make a program to read an integer x. Print the message “positivo” (Portuguese for “positive”) 
if the value is positive. Print the message “negativo” (Portuguese for negative) 
if the value is negative. Print the message “nulo” (Portuguese for null) if the value is zero.

Input
The input consists of a line containing an integer.

Output
The output consists of one line containing a message.

Constraints
the value provided will have no absolute value higher than 1000.

*/

#include <iostream>

using namespace std;

int main(){

    int x;

    cin >> x;

    if(x > 0) cout << "positivo" << endl;
    else if(x < 0) cout << "negativo" << endl;
    else cout << "nulo" << endl;
    
}