/*

One famous mathmatical sequence is Fibonacci sequence, which is defined by:

fib(0) = fib(1) = 1

fib(n) = fib(n - 1) + fib(n - 2)

Write a program that given N, output the n-th Fibonacci number.

Input
The input contains one single number N.

Output
The n-th Fibonacci number.

Constraints
0 ≤ N ≤ 30

*/

#include <iostream>

using namespace std;

int fib(int n){
    if(n < 2) return 1;
    return fib(n-1) + fib(n-2);
}

int main(){

    int N;
    cin >> N;

    cout << fib(N) << endl;

}