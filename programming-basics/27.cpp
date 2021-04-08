/*

Make a program to read an integer N, then N positive integers. Print the amount of each digit 
that appeared in the N numbers read.

Input
The input consists of multiple lines. The first line contains an integer N representing the 
quantity of the number to be delivered. Then N integers will follow.

Output
The output consists of 10 lines; each line contains a digit and the number of occurrences 
of that digit.

*/

#include <iostream>

using namespace std;

int main(){

    int N;
    int arr[10];
    string numbers[11234];

    cin >> N;

    for(int i = 0 ; i < 10 ; i++) arr[i] = 0;

    for(int i = 0 ; i < N ; i++) cin >> numbers[i];

    for(int i = 0 ; i < N ; i++){
        for(auto x : numbers[i]){
            int aux = x - '0';
            arr[aux]++;
        }
    }

    for(int i = 0 ; i < 10 ; i++) cout << i << " - " << arr[i] << endl;

}