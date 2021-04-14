/*

Joãozinho was one day coming home when he realized that he had lost the key to the door. In despair, 
he decided to ask his friend Roberto for help, who in a few seconds managed to open the door using 
his tools.

Admired by the speed at which his friend managed to open the door to his house without the key, 
he decided to ask how he had managed it. Roberto explained that the door lock on Joãozinho’s house 
is based on a system of pins of different sizes which, once aligned at the same height M, 
make it possible to open the door.

A door lock is a set of N pins horizontally arranged which can be moved up or down with the aid 
of a metal key which, when inserted into the lock, can increase or decrease the height of any two 
consecutive pins by 1mm simultaneously.

Joãozinho as a perfectionist decided to unlock his door lock in the smallest amount of movement, 
where each movement consists in choosing two consecutive pins of the lock and increase or decrease 
the height of the two pins by 1mm. After all the pins have a height precisely equal to M, 
the lock is unlocked.

Input
The first line contains two integers N and M representing, respectively, the number of pins in 
the door lock and the height at which they must remain for the door lock to be unlocked.

The second line contains N integers, representing the height of the lock pins.

Output
Your program must print a line containing an integer representing the minimum number of movements 
to unlock the door lock.

Constraints
1 ≤ N ≤ 1000
1 ≤ M ≤ 100
Each pin height is between 1 and 100.
It is guaranteed that test cases always have a solution.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int N, M, diff, last = 0;
    int cont = 0;
    int pins[1123];

    cin >> N >> M;

    for(int i = 0 ; i < N ; i++) cin >> pins[i];
    
    for(int i = 0 ; i < N ; i++){
        diff = M - (pins[i] + last);
        cont += abs(diff);
        last = diff;
    }

    cout << cont << endl;

}