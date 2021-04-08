/*

Computers were invented to perform calculations very quickly, and they greatly meet this requirement. 
However, not every account can be made in a computer, because it cannot represent all the numbers 
within its memory. In a current personal computer, for example, the largest integer that can be 
represented in its memory is 4,294,967,295. If any account run by the computer gives a result above 
that number, what we call overflow will occur, which is when the computer makes an account, and the 
result can not be represented, because it is greater than the maximum allowed value.

For example, if a computer can only represent numbers smaller than 1023 and we have it run the 
account 1022 + 5, an overflow will occur.

You should determine if overflow will occur given the largest number that a computer can represent 
and a sum or multiplication expression between two integers,

Input
The first line contains an integer N representing the largest number the computer can represent. 
The second line contains a P integer, followed by a whitespace, followed by a C character 
(which can be ‘+’ or ‘*’, representing the addition and multiplication operators, respectively), 
followed by a whitespace, followed by another Q integer. This line represents the expression P + Q, 
if the C character is ‘+’, or P * Q, if the CC character is ‘*’.

Output
The program must print a single line containing the word ‘OVERFLOW’ if the result of the expression 
causes an overflow, or the word ‘OK’ otherwise. Both words must be written with capital letters.

Constraints
1 ≤ N ≤ 500.000
0 ≤ P ≤ 1000
0 ≤ Q ≤ 1000

*/

#include <iostream>

using namespace std;

int main(){

    int N, P, Q, total;
    char C;

    cin >> N >> P >> C >> Q;

    switch(C){
        case '+':
            total = P + Q;
            break;
        case '*':
            total = P * Q;
            break;
    }

    if(total > N) cout << "OVERFLOW" << endl;
    else cout << "OK" << endl;

}