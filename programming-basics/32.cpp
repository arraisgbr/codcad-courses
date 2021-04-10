/*

The Hanoi’s Towers jigsaw puzzle is ancient and well known, consisting of a set of N discs 
of different sizes and three vertical pins to which the discs can be fitted.

Each pin can contain a stack with any number of discs, as long as each disc is not placed above 
another disc of smaller size. The initial configuration consists of all the discs on pin 1. 
The purpose of the puzzle is to move all the discs to one of the other pins, always obeying the 
restriction of not placing one discover another smaller one.

Input
The entrance has several test sets. Each test set is composed of a single line, which contains a 
single integer N, indicating the number of discs. The end of the input is indicated by N = 0.

Output
For each test set, your programme must write three lines in the output. The first line must contain 
an identifier of the test set, in the format “Teste n” (“Teste” is Portuguese for “test”), 
where n is numbered sequentially from 1.

The second line must contain the number of movements that are executed by the given algorithm 
to solve the problem of Towers of Hanoi with N disks. The third line should be left blank. 
The spelling shown in the Output Example, below, should be followed strictly.

Constraints
0 ≤ N ≤ 30

*/

#include <iostream>

using namespace std;

int main(){

   int N;   cin >> N;
   int test = 1;

   while(N != 0){
      cout << "Teste " << test << endl << (1 << N) - 1 << endl << endl;
      test++;
      cin >> N;
   }

}