/*

The International Olympic Committee (IOC) is visiting the candidate cities to host the 2016 Olympics. 
Rio de Janeiro is one of the competing cities, but the competition is very fierce.

The IOC has a set of requirements that must be met by the candidate cities, such as good arenas for 
the games (gymnasiums, soccer fields, athletics tracks, water park, …), good housing, a plan for 
vehicular traffic during the games, etc. During its visit to Rio de Janeiro, the IOC placed yet 
another demand: the demonstration of the quality of computer systems. Specifically, 
the IOC wants the local organization to demonstrate its computer skills by producing a program that 
manages the final classification of the countries, considering the number of medals received by the 
athletes in each country.

Your task is to write a program that, given the information of the countries that received gold, 
silver and bronze medals in each sport, manages the ranking list of the countries in the 
competition. In this task, the countries will be identified by integer numbers. 
The best-placed should be the country that got the highest number of gold medals. If there is a tie 
between countries in the number of gold medals, the best-placed among them is the country that got 
the highest number of silver medals. If there is also a tie in the number of silver medals, 
the best-placed among these is the country that received the highest number of bronze medals. 
If there is still a tie between two countries, the best-ranked one is the one with the lowest 
number of identification.

Input
The input contains a single set of tests, which must be read from the standard input device 
(usually the keyboard).

The first line contains two integer numbers N and M, separated by a blank space, indicating 
respectively the number of countries and the number of sports involved in the competition. 
Integers identify countries from 1 to N.

Each of the following M lines contains three integer numbers G, S and B, separated by a blank space, 
representing the countries whose athletes received gold, silver and bronze medals respectively. Thus,
if one of the M lines contains the numbers 3 2 1, it means that in this modality the gold medal was
won by country 3, the silver by country 2 and the bronze by country 1.

Output
Your program must print, in the standard output, a line containing N numbers, separated by a blank 
space, representing the countries in descending order of rank (the first number represents the country 
that is the first place, the second number represents the country that is the second place, and so on)

Constraints
1 ≤ N ≤ 100
1 ≤ M ≤ 100
1 ≤ O ≤ N
1 ≤ P ≤ N
1 ≤ B ≤N

*/

#include <iostream>
#include <algorithm>

using namespace std;

struct country{
    int id, gold = 0, silver = 0, bronze = 0;
};

int cmp(country a, country b){
    if(a.gold != b.gold) return a.gold > b.gold;
    if(a.silver != b.silver) return a.silver > b.silver;
    if(a.bronze != b.bronze) return a.bronze > b.bronze;
    return a.id < b.id;
}

int main(){

    int N, M;
    int gAux, sAux, bAux;
    country countries[112];

    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++) countries[i].id = i;

    for(int i = 0 ; i < M ; i++){
        cin >> gAux >> sAux >> bAux;
        countries[gAux].gold++;
        countries[sAux].silver++;
        countries[bAux].bronze++;
    }

    sort(countries+1, countries+N+1, cmp);

    for(int i = 1 ; i <= N ; i++){
        cout << countries[i].id << " ";
    }

    cout << endl;

}