/*

Dentists are incredibly meticulous in their work, having to act very precisely in all their activities.
Pedro is a meticulous dentist like all the others. Unfortunately, his secretary is not very organized 
and, to always help the patients, he accepts that they make appointments at whatever time they want, 
without worrying about the other scheduled times, causing several scheduling conflicts that much 
bothered Pedro and the patients. For example, if a consultation starts at 9 am and lasts 2 hours, 
no other consultation should be scheduled to begin at 10 am.

When Pedro realized that his schedule had a conflict, he asked for his help to find out as many 
appointments as possible that could be attended without overlap.

You should write a program that, given the start and end times of the scheduled appointments by 
the secretary, answers the maximum number of appointments that can be attended without overlap.

Input
The first line contains an integer N indicating how many appointments the secretary has made. 
Each of the following N lines contains a pair of X and Y integers separated by a blank space 
representing, respectively, the start and end time of the query. Consider that if a query 
starts at the exact moment that another one ends, there is no overlap. 
The start times are provided in the order, and there may be more than one query starting at 
the same time.

Output
Your program must print a single line, containing an integer that represents the maximum number 
of queries that can be answered without any overlap.

Scoring Info
Subtask 1 (40 points)
1 ≤ N ≤ 10⁴
​​
1 ≤ X < Y ≤ 10³
​​
Subtask 2 (60 points)
1 ≤ N ≤ 10⁴
​​
1 ≤ X < Y ≤ 10⁶
​​
*/

#include <iostream>
#include <algorithm>

using namespace std;

struct query{
    int start, end;
};

int cmp(query a, query b){
    return a.end < b.end;
}

int main(){

    int n; cin >> n;
    int x, y;
    int cont = 0, endtime = 0;
    query queries[11234];

    for(int i = 0 ; i < n ; i++){
        cin >> x >> y;
        queries[i].start = x;
        queries[i].end = y;
    }

    sort(queries, queries+n, cmp);

    for(int i = 0 ; i < n ; i++){
        if(queries[i].start >= endtime){
            cont++;
            endtime = queries[i].end;
        }
    }

    cout << cont << endl;

}

