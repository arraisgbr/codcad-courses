/*

Modify the code below by adding the function code title, which should return a string, 
with the first letter of each capital word and the remaining lower case.

    #include <iostream>

    using namespace std;

    string title(string F){
        //Your code here
    }

    int main(){ 
        string F;

        getline(cin, F);

        cout << title(F) << "\n";
    }

Input
Your program input will be only one line containing one F sentence.

Output
Your program must print a single line containing the modified F phrase.

Constraints
F is case sensitive and words are separated by single spacing.

*/

#include <iostream>

using namespace std;

string title(string F){
    if(F[0] >= 'a' && F[0] <= 'z') F[0] = F[0] - 32;
    for(int i = 1 ; i < F.length() ; i++){
        if(F[i-1] == ' ' && F[i] >= 'a' && F[i] <= 'z') F[i] = F[i] - 32;
        else if(!(F[i-1] == ' ') && F[i] >= 'A' && F[i] <= 'Z') F[i] = F[i] + 32;
    }
    return F;
}

int main(){ 
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}