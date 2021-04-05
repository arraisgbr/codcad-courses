/*

The school class will take an excursion to the mountains, 
and all students and supervisors will take a cable car to climb to the top of a mountain. 
The cable car cabin can take a maximum of 50 people, counting students and supervisors, 
during a trip to the peak.

In this problem, given the number of students A and the number of supervisors S, 
you must write a program that says whether or not it is possible to take all students and 
supervisors in just one trip!

Input
The first line of the ticket contains an integer A, representing the number of students. 
The second row of the entrance contains an integer S, representing the number of supervisors.

Output
Your program should print a line containing the ‘S’ character if it is possible to take 
all students and monitors on one trip (short form of “Sim”, Portuguese for “yes”), 
or the ‘N’ character if it is not possible (short form of “Não”, Portuguese for “no”).

Constraints
1 ≤ A ≤ 50
1 ≤ S ≤ 50

*/

#include <iostream>

using namespace std;

int main(){

    int A, S, total;

    cin >> A >> S;

    total = A + S;

    if(total <= 50) cout << "S" << endl;
    else cout << "N" << endl;
    
}