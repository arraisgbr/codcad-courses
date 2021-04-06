/*

In a prize draw, a participant first draws an integer N and then N values. 
The number of points of the participant is the size of the most extensive sequence of 
equal consecutive values. 
For example, suppose a participant draws N = 11 and, in this order, the values.

30, 30, 30, 30, 40, 40, 40, 40, 40, 30, 30

Then, the participant wins 5 points, corresponding to the five consecutive 40 values. 
Note that the participant has drawn six values equal to 30, but not all are consecutive.

Your task is to help the organization of the event by writing a program that determines the 
number of points of a participant.

Input
The first line of the input contains an integer N, the number of values drawn. 
The second line contains N values, V1, V2, ..., VN, in the order of drawing, 
separated by a blank space.

Output
Your program should print only one line, containing only an integer, 
indicating the number of points of the participant.

Restrictions
1 ≤ N ≤ 10⁴
-2^31 ≤ Vi ≤ 2^31 -1, for i = 1, 2, ..., N

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int N, cont = 1;
    int values[11234];
    vector<int> ans;

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        cin >> values[i];
    }

    int ant = values[0];
    for(int i = 1 ; i <= N ; i++){
        if(values[i] == ant) cont++;
        else{
            ans.push_back(cont);
            cont = 1;
            ant = values[i];
        }
    }

    long long MAX = INT64_MIN;
    for(auto x : ans){
        if(x > MAX) MAX = x;
    }

    cout << MAX << endl;

}