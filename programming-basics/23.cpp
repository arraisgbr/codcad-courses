/*

You must write a program that will be able to solve multiplication and division operations. 
First, you will be informed which operation your program should calculate; 
then you will be informed two numbers, your program should then print the appropriate answer.

Input
The input consists of two lines; the first line will show the letter ‘M’ if you must 
calculate the multiplication between the numbers and the letter ‘D’ if the operation is division. 
The second line will contain two real numbers.

Output
The output contains only one line, informing the appropriate response for the operation performed 
with an accuracy of 2 decimal places.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    char letter;
    double x, y;
    cin >> letter;
    cin >> x >> y;

    cout << setprecision(2) << fixed;

    switch(letter){
        case 'M':
            cout << x * y << endl;
            break;
        case 'D':
            cout << x / y << endl;
            break;
    }

}