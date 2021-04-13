/*

The Formula One season consists of a series of races, known as Grand Prix races, organized by the 
International Automobile Federation. The results of each Grand Prix are combined to determine 
the World Championship. More specifically, each Grand Prix is awarded points to the drivers, 
depending on the classification in the race. At the end of the season, the driver who has scored 
the most points is declared World Driver Champion.

Formula One organizers continuously change the rules of the competition, to give more excitement 
to the disputes. A modified rule for the 2010 season was precisely the distribution of points in 
each Grand Prix. Since 2003 the scoring rule awarded the top eight finishers, according to the 
following table:

1°: 10
2°: 8
3°: 6
4°: 5
...

That is, the winning driver won 10 points, the second place won 8 points, and so on.

In the 2010 season, the top ten finishers will receive points, according to the following table:

1°: 25
2°: 18
3°: 15
4°: 12
...

The change in the scoring system has caused a lot of speculation about what the effect would have 
been in past World Championships if the new score had been used in previous seasons. For example, 
would Lewis Hamilton have been champion in 2008, as the difference in his total score to 
Felipe Massa was only one point? To end the speculation, FIA hired you to write a program that, 
given the results of each race in a season, determines World Driver Champion for different scoring 
systems.

Input
The input contains several test cases. The first line of a test case contains two integers G and P 
separated by a blank space, indicating the number of Grand Prix and the number of drivers respectively. 
Integers identify pilots from 1 to P. Each of the following G lines indicates the result of a race 
and contains P integers separated by blanks. On each line, the i-th number indicates the order of 
finish of driver i in the race (the first number indicates the order of finish of driver 1 in that 
race, the second number indicates the order of finish of driver 2 in the race, and so on). The next 
line contains a single integer S indicating the number of scoring systems, and then each of the 
following S lines has the description of a scoring system. The definition of a scoring system begins 
with an integer K indicating the last order of finish that will receive points, followed by a blank 
space, followed by K integers k0, k1, ..., k{n-1} separated by blank spaces, indicating the points 
to be awarded (the first integer indicates the points of the first place, the second integer 
indicates the points of the second place, and so on).

The last test case is followed by a line containing only two zero numbers separated by a blank space.

Output
For each case of a scoring system, your programme must print a line, which must contain the 
World Pilots Champion identifier. If there is more than one World Pilot Champion 
(i.e. if there is a tie), the line must contain all World Champions Pilots, in ascending order of 
identifier, separated by a blank space.

Constraints
1 ≤ G ≤ 100
1 ≤ P ≤ 100
1 ≤ S ≤ 10
1 ≤ K ≤ P
1 ≤ k ≤ 100

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct pilot{
    int id;
    int points = 0;
    vector<int> positions;
};

int cmp(pilot a, pilot b){
    if(a.points != b.points) return a.points > b.points;
    return a.id < b.id;
}

int main(){

    int G, P, S, K, pos;
    int systemPoints[112];
    pilot pilots[112];

    cin >> G >> P;


    while(G != 0 && P != 0){

        for(int i = 1 ; i <= P ; i++) pilots[i].id = i;
        
        for(int i = 0 ; i < G ; i++){
            for(int j = 1 ; j <= P ; j++){
                cin >> pos;
                pilots[j].positions.push_back(pos);
            }
        }
        
        cin >> S;
        for(int i = 0 ; i < S ; i++){
            cin >> K;
            for(int j = 1 ; j <= K ; j++) cin >> systemPoints[j];

            for(int j = 1 ; j <= P ; j++){
                for(auto x : pilots[j].positions){
                    for(int n = 1 ; n <= K ; n++){
                        if(x == n) pilots[j].points += systemPoints[n];
                    }
                }
            }

            sort(pilots+1, pilots+P+1, cmp);

            int first = pilots[1].points;
            for(int j = 1 ; j <= P ; j++){
                if(pilots[j].points == first) cout << pilots[j].id << " ";
                else break;
            }
            
            for(int j = 1 ; j <= P ; j++) pilots[j].points = 0;

            cout << endl;
        }

        for(int x = 1 ; x <= P ; x++) pilots[x].positions.clear();

        cin >> G >> P;
    }  
}