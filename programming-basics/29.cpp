/*

Change the code below by adding the function code eh_primo, which must return true when the number 
x is prime and false otherwise.

    #include <iostream>

    using namespace std;

    bool eh_primo(int x){
        //Your code here.
    }

    int main(){
        int x;

        cin>>x;

        if(eh_primo(x)){
            cout << "S" << "\\n";
        }else{
            cout << "N" << "\\n";
        }
    }

Input
Your program input will be only one line containing the whole number x.

Output
Your program must print a single line containing “S” (short form of “Sim”, Portuguese for “yes”) 
in the standard output if xx is prime and “N” (short form of “Não”, Portuguese for “no”) otherwise.

Constraints
1 ≤ x ≤ 10⁵
​​
*/


#include <iostream>

using namespace std;

bool eh_primo(int x){
    int cont = 0;
    for(int i = 1 ; i <= x ; i++){
        if(x % i == 0) cont++;
    }

    if(cont == 2) return true;
    return false;
}

int main(){

    int x;

    cin >> x;

    if(eh_primo(x)){
        cout << "S" << "\n";
    }
    else{
        cout << "N" << "\n";
    }

}
