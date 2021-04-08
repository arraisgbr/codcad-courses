/*

Most Brazilian universities use the vestibular (entrance exam) to select their students. 
The vestibular consists of one or more tests on high school subjects, to evaluate the candidates’ 
knowledge.

A popular format for the vestibular test is the objective test. In this test format, each 
candidate must choose one of the five alternatives presented by the question as being the correct one. 
During the correction of the cards, each question where the option selected by the candidate is the 
same as the template, he gains one point. Tens of thousands of candidates dispute some of the 
most popular entrance exams in Brazil. Therefore, an optical reading sheet and a computer program 
are usually used to correct the exams of all candidates and generate the list with their scores.

You work in the committee responsible for the vestibular in a college, and you must write a program 
that, given the template and the answers of one of the candidates, determines the number of hits of 
that candidate.

Input
The input contains a single set of tests, which must be read from the standard input device. 
The first line of the input includes a single integer N, indicating the number of questions 
in the test. The second line of the entry contains a string of N characters, meaning the test 
template. The third line of the entry includes another string of N characters, indicating the 
options selected by the candidate. Both strings contain only the characters ‘A’, ‘B’, ‘C’, ‘D’ and ‘E’ 
(always in capital letters).

Output
Your program must print a single line containing a single integer on the standard output, 
indicating the number of hits for the candidate.

Constraints
1 ≤ N ≤ 80

*/

#include <iostream>

using namespace std;

int main(){

    int N, total = 0;
    string ans, correct;

    cin >> N;

    cin >> correct;
    cin >> ans;

    for(int i = 0 ; i < N ; i++) if(ans[i] == correct[i]) total++;

    cout << total << endl;
    
}