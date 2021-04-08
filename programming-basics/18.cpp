/*

Gabriel invented a code to represent natural numbers using a sequence of zeros and ones. 
It works like this; the natural number is represented by the number of times the pattern 
“100” appears in the sequence.

For example, in the sequence 11101001010011110, the pattern appears twice, and in the sequence 
1110101110101, it does not appear at all. 
You should help Gabriel implement a program that, 
given the sequence of zeros and ones, 
calculates how many times the pattern “100” appears in it.

Input
The first line of the input contains an integer N, the size of the sequence. 
The second line contains the sequence of N zeros and ones, separated by whitespace.

Output
Your program must print an integer, how many times the pattern “100” appears in the sequence.

Restrictions
1 ≤ N ≤ 10⁴​​

*/

#include <iostream>

using namespace std;

int main(){

    int N, cont = 0;
    int arr[11234];

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < (N-2) ; i++){
        if(arr[i] == 1){
            if(arr[i+1] == 0){
                if(arr[i+2] == 0) cont++;
            }
        }
    }

    cout << cont << endl;

}