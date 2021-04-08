/*

https://neps.academy/br/course/6/lesson/142

Leonardo is a boy fascinated by board games. In January vacation, he learned a game called Minefield, 
which is played on a board with N cells arranged horizontally. The goal of this game is to determine, 
for each cell on the board, the number of explosive mines in the surroundings of 
the board (which are the cell itself and the cells immediately next to the right and left, 
if these exist). For example, the figure below illustrates a possible configuration of a 
board with five cells:

The first cell does not have an explosive mine, but it is next to a cell that has an explosive mine. 
In the surroundings of the second cell, we have two mines, 
and the same goes for the third and fourth cell; 
the fifth cell has only one explosive mine in its surroundings. 
The next figure illustrates the answer to that case.

Leonardo knows that you participated in the OBI and decided to ask you to write a 
computer program that, given a board, prints the number of mines in the vicinity of each position. 
That way, he can check the hundreds of trays he solved during the holidays.

Input
The first line of the input contains an integer N indicating the number of cells 
on the board. The board is given in the next N lines. 
The next i-th line has 0 if there is no mine on the i-th cell on the board and one if 
there is a mine on the i-th cell on the board.

Output
The output is N lines. The i-th row of the exit contains the number of explosive mines 
around the i-th cell of the board.

Constraints
1 ≤ N ≤ 50

*/

#include <iostream>

using namespace std;

int main(){

    int N;
    int minefield[52], ans[52];

    cin >> N;

    for(int i = 0 ; i < N ; i++) cin >> minefield[i];
    for(int i = 0 ; i < N ; i++){
        ans[i] = minefield[i];
        if(i > 0) ans[i] += minefield[i-1];
        if(i < N-1) ans[i] += minefield[i+1];
    }

    for(int i = 0 ; i < N ; i++) cout << ans[i] << endl;

}