/* 

Alice and Bia have created a website with information about the yellow-breasted capuchin monkey, 
an endangered species. The page shows how everyone can help maintain the natural 
habitat to prevent the species from becoming extinct.

One company liked Alice and Bia’s initiative so much that it promised to donate a 
prize so that the two friends can carry out other similar efforts. The company decided 
that it will give the award when the sum of the number of page accesses reached 1 million.

Given the list of daily accesses that occurred to the page of Alice and Bia, write a 
program to determine how many days it took for the sum of the accesses to reach 
1 million and the friends to win the prize.

Input
The first line contains an integer N, which indicates the number of days the list contains. 
Each of the following lines contains a single integer A, the number of accesses in one day. 
The first given number indicates the number of accesses on the first day, 
the second given number indicates the number of accesses on the second day, and so on.

Output
Your program must write in the output a single line, containing a single integer, 
the number of days that were necessary for the sum of the accesses to the page of Alice 
and Bia to reach 1000000.

Restrictions
1 ≤ N ≤ 10³, i.e. the list has a maximum of 1000 numbers
0 ≤ A ≤ 10⁶, i.e., each integer A on the list is non-negative and less than or equal to 1 million
The sum of all A in the list is greater than or equal to 1 million (i.e. Alice and Bia certainly win the prize).

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int N, A, total = 0;
    vector<int> ans;

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        cin >> A;
        total += A;
        if(total >= 1000000) ans.push_back(i);
    }

    cout << ans.front() << endl;

}