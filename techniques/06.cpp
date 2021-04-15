/*

Johnny lives on a street which has NN houses. Marcos is his best friend but loves to make pranks with 
Johnny. This time, he took the two favourite toys from Johnny and hid them in two different houses 
of the street. In compensation, Marcos gave a critical tip to Johnny:

The sum of the house numbers where I hid your toys is equal to K. Also, I chose the houses in such a 
way that does not exist another couple of houses whose sum has that same value.
Knowing this, find the house pair where Johnny’s toys are. To help his friend, Marcos gave Johnny 
one list with the house numbers already in increasing order(from smallest to the largest number).

Input
The first line contains one integer N, which represents the number of houses that are on the street. 
Each of the following N lines has an integer, representing each house number. Notice that these N 
numbers are ordered from the smallest to the largest. The last line contains an integer K, which is 
the sum of the two houses where the toys are hidden.

Output
Your program has to output one single line, containing two integers, A and B, A < B, which represent 
the numbers of the houses where the toys are hidden. The two numbers must be separated by one blank 
space.

Constraints
2 ≤ N ≤ 10⁵
0 ≤ Ci ≤ 10⁹
​​
*/

#include <iostream>

using namespace std;

int main(){

    int n, k, houses[112345];

    cin >> n;

    for(int i = 0 ; i < n ; i++) cin >> houses[i];

    cin >> k;

    int i = 0;
    int j = n-1;
    while(i < j){
        if(houses[i] + houses[j] < k) i++;
        else if(houses[i] + houses[j] > k) j--;
        else break;
    }

    cout << houses[i] << " " << houses[j] << endl;

}