/*

Roberto has a set of pencils with ten different shades of the same colour, numbered from 0 to 9. 
On a checkered ribbon, some squares were initially coloured with the tone 0.

Roberto needs to determine, for each uncoloured Q square, how far he is from the nearest 
square to tone 0. The distance between two squares is defined with the minimum number of 
moves to the left, or to the right, to go from one square to the other. 
The square Q, then, must be coloured with the tone whose numbering corresponds to the distance 
determined. If the distance is greater than or equal to 9, the square must be coloured with the 
shade 9. Your program must colour and print the grid ribbon given at the entry.

Input
The first line contains only an integer N, indicating the number of squares in the tape. 
The second row contains N integers: “-1” if the square is not coloured, and “0” if it is coloured 
with the tone 0.

Output
Your program must write the full-colour ribbon in the output, according to the rule defined above.

Constraints
3 ≤ N ≤ 10⁴
There is always at least a “0” initially on the tape.

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int N;
    int ribbon[11234];
    int newRibbon[11234];

    vector<int> index;

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        cin >> ribbon[i];
        if(ribbon[i] == 0) index.push_back(i);
        newRibbon[i] = 0;
    }

    for(int i = 0 ; i < N ; i++){
        int min = INT8_MAX;
        if(ribbon[i] != 0){
            for(auto x : index){
                if(abs(i - x) < min) min = abs(i - x);
            }
            newRibbon[i] = min;
        }
    }

    for(int i = 0 ; i < N ; i++){
        if(newRibbon[i] > 9) newRibbon[i] = 9;
        cout << newRibbon[i] << " ";
    }
    cout << endl;

}