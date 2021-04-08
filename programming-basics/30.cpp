/*

Modify the code below by adding the function code sum_vector, which receives as parameters an 
integer n and a pointer to an array of integers v and must return an int: 
the sum of the n elements of the array v. It is worth noting that you can work with the 
pointer to the vector in the same way you would if you worked directly with the vector.

    #include <iostream>

    using namespace std;

    int sum_vetor(int n, int v[]){
        // Your code here.
    }

    int main(){
        
        int n, v[100100];
        cin >> n;
        
        for(int i=0;i<n;i++)
            cin >> v[i];

        cout << sum_vetor(n,v) << "\n";
    }

Input
Your program input will have two lines: the first will have a single integer n, and the second 
will have the nn elements v​i of vector v.

Output
Your program must print in the standard output a single line containing the sum of the vector 
elements.

Constraints
1 ≤ n ≤ 10⁵
​​-10⁴ ≤ vi ≤ 10⁴
​​
*/

#include <iostream>

using namespace std;

int sum_vetor(int n, int v[]){
    int sum = 0;

    for(int i = 0 ; i < n ; i++) sum += *(v+i);

    return sum;
}

int main(){
    
    int n, v[100100];
    cin >> n;
    
    for(int i=0;i<n;i++)
        cin >> v[i];

    cout << sum_vetor(n,v) << "\n";

}