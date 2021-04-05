/*

At Neps Academy School (NAS), a student passes if they achieve a final grade of 7 or above. 
If the student has a grade of less than seven but greater than or equal to 4, 
he or she has to go to summer school. If the student has an average of less than 4, 
the student fails.

The grade is calculated with the score of the two tests applied in the semester and 
simply corresponds to the arithmetic average of the two scores.

Based on the student’s two grades, indicate the student’s final score: “Aprovado” 
(Portuguese for “pass”), “Reprovado” (Portuguese for “fail”) or “Recuperacao” 
(Portuguese for “summer school”).

Input
The input consists of only one line with the A and B grades, which correspond to the 
student’s two grades that semester.

Output
The output of your program should be only one line. If the student has been approved, 
report “Aprovado” if the student has failed, report “Reprovado” and if he is on recovering 
summer school “Recuperacao”.

*/

#include <iostream>

using namespace std;

int main(){
    float A, B, avg;

    cin >> A >> B;

    avg = (A + B) / 2;

    if(avg >= 7) cout << "Aprovado" << endl;
    else if(avg >= 4) cout << "Recuperacao" << endl;
    else cout << "Reprovado" << endl;
    
}