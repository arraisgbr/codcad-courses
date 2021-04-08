/*

Given a square M matrix of natural numbers, the i index of a certain row and the j index of a 
certain column, let’s define the weight of the crossing of the i row with the j column, 
as the sum of all the elements that are in the i row or the j column, but not both. 
That is, excluding the element that is exactly at the intersection! In this problem, 
you must find out what the maximum weight is between all the possible crossings of the matrix!

In chess, the rook is a piece that can move to any other position on the board in the row or 
on the column of the position it occupies. Teacher Paulo is trying to invent a new kind of chess 
game where all pieces are rooks, the board is also square but can have any dimension and 
each position on the board is noted with a positive integer.

He defined the weight of a (i,j)(i,j) position as the sum of all the numbers that are in the i row 
with all the numbers in the j column, but without adding up the number that is exactly in the 
(i,j)(i,j) position. That is if a tower is at the (i,j)(i,j) position, the weight of the position 
is the sum of all the positions that that tower could attack.

Teacher Paulo is asking for your help in implementing a program that determines the maximum weight 
among all the positions on the board.

Input
The first row of the input contains an integer N, representing the size of the board.
Each of the following N rows contains N positive integers X​i, defining the numbers at each board position.

Output
Your program must produce a single line, containing a single integer, the maximum weight between 
all the board positions.

Restrictions
3 ≤ N ≤ 1000
0 ≤ Xi ≤ 100

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int N, aux, total;
    vector<int> rows, columns;
    int board[1002][1002];
    int MAX = INT8_MIN;

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        aux = 0;
        for(int j = 0 ; j < N ; j++){
            cin >> board[i][j];
            aux += board[i][j];
        }
        rows.push_back(aux);
    }

    for(int j = 0 ; j < N ; j++){
        aux = 0;
        for(int i = 0 ; i < N ; i++) aux += board[i][j];
        columns.push_back(aux);
    }

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            total = rows[i] + columns[j] - (2 * board[i][j]);
            MAX = max(MAX, total);
            total = 0;
        }
    }

    cout << MAX << endl;

}