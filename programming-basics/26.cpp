/*

In chats, it is widespread among young people and teenagers to use letter sequences, 
which often seem random, to represent laughter. Some common examples are:

huaauhahhuahau
hehehehe
ahahaha
jaisjkasjksjskjakijs
huehuehue

Cláudia is a young programmer who was intrigued by the sound of “digital laughter”. 
Some of them can’t even pronounce! But she realized that some of them seem to convey the 
feeling of laughter better than others. The first thing she realized is that consonants 
don’t interfere with how much digital laughter influences the transmission of the feeling. 
The second thing she noticed is that the funniest digital laugh is where the vowel sequences are 
the same when reading in natural order (left to right) or reverse order (right to left), 
ignoring consonants. For example, “hahaha” and “huaauhahhuahau” are among the funniest laughs, 
while “riajkjdhhihjak” and “huehuehue” are not among the funniest.

Claudia is very busy with statistical analysis of digital laughter. She has asked for your help 
in writing a program that determines for a digital laugh, whether it is one of the funniest or not.

Input
The input consists of one line, containing a sequence of no more than 50 characters, 
formed only by lowercase letters without an accent. 
The vowels are the letters ‘a’,‘e’,‘i’,‘o’,‘u’. The sequence contains at least one vowel.

Output
Your program should produce a line containing one character, “S” (short form of “Sim”, 
Portuguese for “yes”) if the laughter is one of the funniest, or “N” otherwise 
(short form of “Não”, Portuguese for “no”).

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    string letters;
    bool funny = true;
    vector<char> vowels;

    cin >> letters;

    for(int i = 0 ; i < letters.length() ; i++){
        if(letters[i] == 'a' || letters[i] == 'e' || letters[i] == 'i' 
        || letters[i] == 'o' || letters[i] == 'u') vowels.push_back(letters[i]);
    } 

    auto y = vowels.rbegin();
    for(auto x = vowels.begin() ; x != vowels.end() ; x++, y++){
        if(*x == *y) continue;
        funny = false;
    }

    if(funny) cout << "S" << endl;
    else cout << "N" << endl;

}