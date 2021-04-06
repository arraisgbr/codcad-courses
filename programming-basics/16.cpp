/*

Your teacher gave you an exercise where you must find the square root of several numbers. 
As you do not want to waste time with this silly and meaningless task, 
you decided to make a program that given N numbers, he returns the square root of each 
of these numbers.

Input
The first line contains an integer N representing the number of numbers you will 
have to print the square root. The second line contains the N numbers separated by a blank space.

Input
Your program must print N lines, each containing the root of the number in order, 
each root to 4 decimal places.

Constraints
1 ≤ N ≤ 10000
0 ≤ X ≤ 10⁹, where X represents the numbers in each line.

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int N;
    double aux;

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        cin >> aux;
        aux = sqrt(aux);
        cout << fixed << setprecision(4);
        cout << aux << endl;;
    }

}