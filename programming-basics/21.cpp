/*

It is called a magic square an arrangement, in the form of a square, of N×N integer numbers such that 
all rows, columns and diagonals have the same sum.

Write a program that, given a square, determines whether it is magic or not and 
what its sum is (if it is magic).

Input
The input contains a single set of tests, which must be read from the standard input device. 
The first line of each test case contains an integer N. 
The following N lines each contain an integer N, separated by exactly one blank space. 
Integers within the square are all greater than 0 (zero) and less than 1,000.

Output
Your program must print, in the standard output, a single line with an integer representing the 
sum of the magic square or -1 if the square is not magic.

Constraints
2 ≤ N ≤ 10

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int N;
    vector<int> sums;
    int square[11][11];

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++) cin >> square[i][j];
    }

    // main diagonal
    int sum = 0;
    for(int i = 0 ; i < N ; i++) sum += square[i][i];
    sums.push_back(sum);

    // antidiagonal
    sum = 0;
    for(int i = 0, j = N-1 ; i < N ; i++, j--) sum += square[i][j];
    sums.push_back(sum);

    // row 
    for(int i = 0 ; i < N ; i++){
        sum = 0;
        for(int j = 0 ; j < N ; j++) sum += square[i][j];
        sums.push_back(sum);
    }

    // column
    for(int j = 0 ; j < N ; j++){
        sum = 0;
        for(int i = 0 ; i < N ; i++) sum += square[i][j];
        sums.push_back(sum);
    }

    int front = sums.front();
    for(auto x : sums){
        if(x != front){
            cout << -1 << endl;
            return 0;
        }
    }

    cout << front << endl;

}