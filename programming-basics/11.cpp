/*

Part of a new waiter’s training is to carry a large tray with several cans of drinks and glasses 
and deliver everything to a table. During training, it is common for waiters to drop the trays, 
breaking all the glasses.

SBC - Sociedade Brasileira de Copos (Brazilian Society of Glasses) - analyzed training 
statistics from several waiters and found that waiters in training only drop trays 
that have more cans than glasses. For example, if a tray has ten cans and four glasses, 
the waiter in training will undoubtedly drop it, breaking the four glasses. 
If the tray has five cans and six glasses, he will be able to deliver it without dropping it.

Write a program that, given the number of cans and glasses on each tray the waiter tried,
to deliver, prints the total number of glasses he broke.

Input
The first line contains an integer N representing the number of trays that the 
waiter tried to carry. The following N lines represent the N trays. 
Each line contains two integers L and C, indicating the number of cans and the number 
of glasses in that tray, respectively.

Output
Your program should print a single line, containing a single integer, indicating the 
total number of glasses that the waiter broke.

Constraints
1 ≤ N ≤ 100
0 ≤ L,C ≤ 100

*/

#include <iostream>

using namespace std;

int main(){

    int N, C, G, tG = 0;


    cin >> N;

    for(int i = 0 ; i < N ; i++){
        cin >> C >> G;
        if(C > G) tG += G;
    }

    cout << tG << endl;
    
}