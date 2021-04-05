/*

Bino and Cino are very fond of playing “odds or evens”. Bino always chooses even, 
and Cino always chooses odd.

Make a program to automate the result of the match. 
Your program should read the number of fingers each one used and print the name of the winner.

Input
The input consists of two lines. The first line contains the number of fingers that Bino used. 
The second line contains the number of fingers that Cino used.

Output
The output consists of one line. Print “Bino” in case Bino wins the game, 
print “Cino” if Cino wins the game.

Constraints
As Bino and Cino only have ten fingers (counting both hands), 
the values given will be between 0 and 10.

*/

#include <iostream>

using namespace std;

int main(){

    int binoFingers, cinoFingers, totalFingers;

    cin >> binoFingers >> cinoFingers;

    totalFingers = binoFingers + cinoFingers;

    if(totalFingers % 2 == 0) cout << "Bino" << endl;
    else cout << "Cino" << endl;
    
}