/*

You’re back at your hotel in Thailand after a day of diving. Your room has two lamps. 
Let’s call them A and B. In the hotel, there are two switches, which we will call I1 and I2. 
When you press I1, the A light bulb goes on if it’s off, and it goes off if it’s on. 
If you press I2, each of the A lamps and the B change state: if it’s off, 
it goes on and if it’s on it goes off.

The bulbs are both off initially. Your friend has decided to give you a challenge. 
He will press the switches in a certain sequence and would like you to answer the final 
status of the A and B bulbs.

Input
The first line contains a N number that represents how many times your friend will push some switch. 
The next line will follow N numbers, which can be one, if the I1 switch has been pressed, 
or two if the I2 switch has been pressed.

Output
Your program should print two values, in separate lines. On the first line, 
print 1 if the A lamp is lit at the end of operations and 0 if not. 
On the second line, print 1 if the B lamp is lit at the end of operations and 0 otherwise.

Restrictions
2 ≤ N ≤ 10⁵
​​

*/

#include <iostream>

using namespace std;

int main(){

    int N, aux;
    bool A = false, B = false;

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        cin >> aux;
        if(aux == 1) A = !A;
        else{
            A = !A;
            B = !B;
        }
    }

    if(A) cout << 1 << endl;
    else cout << 0 << endl;

    if(B) cout << 1 << endl;
    else cout << 0 << endl;
    
}