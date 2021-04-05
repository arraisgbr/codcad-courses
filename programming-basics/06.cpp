/*

Joãozinho has just changed schools and the first thing he noticed at the 
new school is that the playground’s teeter-totter is not symmetrical, 
one end is longer than the other. After playing with a friend of the same weight a few times, 
he realized that when he is on one end, the teeter-totter is 
unbalanced to his side (that is, he is on the bottom, and the friend is on the top), 
but when they switch sides, the teeter-totter is unbalanced to his friend’s side.

Without understanding the situation, Johnny asked another friend in for help, 
who explained that the length of the side interferes with the balance of the teeter-totter, 
as the teeter-totter will be balanced when P1 x C1 = P2 x C2 where P1 and P2 are the child’s 
left and right side weights, respectively, and C1 and C2 are the left and right side teeter-totter 
lengths, respectively.

With the equation, Johnny can already tell if the teeter-totter is balanced or not, 
but he also wants to know which way the teeter-totter will go if it is unbalanced.

Input
The first and only row of the entry contains 4 integers, P1, C1, P2 and C2, in this order.

Output
Your program must produce a single line, containing a single integer. 
If the teeter-totter is balanced, print ‘0’. If it is unbalanced so that the left child is 
at the bottom, print ‘-1’, otherwise print ‘1’.

Restrictions
10 ≤ P1 ​≤ 100
10 ≤ C1 ​≤ 100
10 ≤ P2 ​≤ 100
10 ≤ C2 ​≤ 100

*/

#include <iostream>

using namespace std;

int main(){

    int P1, C1, P2, C2;
    int T1, T2;

    cin >> P1 >> C1 >> P2 >> C2;

    T1 = P1 * C1;
    T2 = P2 * C2;

    if(T1 == T2) cout << "0" << endl;
    else if(T1 > T2) cout << "-1" << endl;
    else cout << "1" << endl;
    
}