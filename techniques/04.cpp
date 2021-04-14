/*

Some of your friends decided to travel to Russia to explore Ordinskaya, the country’s longest 
underwater cave. Despite the excellent visibility of the cave’s waters, it’s always possible to 
find new passages and tunnels that lead away from the main cave, which could cause someone to 
get lost and probably freeze in the cold temperatures. To prevent this from happening during 
the dives, the group used a tape measure to mark the path taken and ensure a safe return. 
They also took the opportunity to measure how much they had explored, every time they returned 
to the surface, someone from the group noted in a notebook how far they had gone.

The only problem with this strategy was that with each dive, different people were responsible for 
checking the tape measure and noting how much had been explored. So, if the length of the tape was 
10 meters, after a dive in which the group explored 3 meters from the cave, one of the friends 
could have unrolled the tape from the beginning to the end and write down that 3 meters had been 
explored. In contrast, another one, unaware that he had unrolled the tape in the opposite 
direction, could write down that 7 meters had been explored.

Only at the end of the trip did your friends notice the mess, and now they asked for his help to 
reconstruct the distances explored. You were informed that before the trip, the group bought a 
tape with M meters and that in total, they made N dives. Another important information is that 
with each new dive at least the same distance of the previous dive was explored, so if the 
length of the tape was 10 meters and the notes made were 3 and 8 meters, in that order, 
the only scenarios that could have happened are:

3 meters on the first dive and 8 meters on the second dive;
7 meters in the first dive and 8 in the second.
But if the values noted were 2 and 8, there are three possibilities:

2 meters in the first dive and 8 in the second;
2 meters in the first dive and 2 in the second;
8 meters in the first dive and 8 in the second.
As some mistake may have occurred in the notes, it may be impossible to reconstruct the original 
sequence, don’t worry, everyone will understand if that happens.

Input
The first line contains two integers N and M, representing respectively the amount of dives the 
group made and the length in meters of the tape they took to the exploration. The second line 
contains NN integers A1, A2, ..., AN representing the measurements made each dive, in the order, 
they were noted.

Output
Your program should produce a single line containing only an integer, which represents the sum of 
the explored distances. If there is more than one possible sequence, print the smallest possible 
sum of the sequences. If there is no sequence compatible with the data, print only the integer -1.

Constraints
1 ≤ N ≤ 10⁴​​
1 ≤ M ≤ 5 ∗ 10⁵
0 ≤ Ai ≤ M

*/

#include <iostream>

using namespace std;

int arr[11234];

int main(){

    int n, m;
    long long ans = 0;
    cin >> n >> m;

    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    arr[0] = min(arr[0], m - arr[0]);

    for(int i = 1 ; i < n ; i++){
        if(min(arr[i], m - arr[i]) >= arr[i-1]) arr[i] = min(arr[i], m - arr[i]);
        else if(max(arr[i], m - arr[i]) >= arr[i-1]) arr[i] = max(arr[i], m - arr[i]);
        else{
            cout << -1 << endl;
            return 0;
        }
    }

    for(int i = 0 ; i < n ; i++) ans += arr[i];

    cout << ans << endl;

}