/*

https://neps.academy/course/6/lesson/128

Flipper is a kind of game where a little metal ball falls through a maze of paths until it 
reaches the bottom of the labyrinth. The amount of points the player earns depends on 
the path the little ball follows. The player can control the path of the little ball by 
changing the position of some doors of the labyrinth. Each door can be in position 0, 
which means turning left, or in position 1, which means turning right. 
Consider the flipper of the figure below, which has two small doors. 
The PP door is in position 1, and the RR door is in position 0. 
That way, the ball will fall down the B way.

You must write a program that given the positions of the little doors P and R in this 
flipper of the figure, say by which of the three paths, A, B, or C, the little ball will fall!

Input
The input is composed of only one line containing two numbers P and R, indicating the positions 
of the two doors of the flipper in the figure.

Output
The output of your program should also be only one line, containing a capital letter that indicates 
the path where the ball will fall: ‘A’, ‘B’ or ‘C’.

Restrictions
The number P can be 0 or 1. The number R can be 0 or 1.

*/

#include<iostream>

using namespace std;

int main(){

    int P, R;

    cin >> P >> R;

    if(P == 0) cout << "C" << endl;
    else if(P == 1 && R == 0) cout << "B" << endl;
    else cout << "A" << endl;
    
}