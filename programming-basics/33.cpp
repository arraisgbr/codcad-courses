/*

Print the terms of a sequence, from the smallest to the largest.

Input
The first row of the entry contains an integer N, representing the number of elements in the sequence.

The second line contains N integers: the N sequence numbers

Output
Your program should generate a single line: the N input numbers, in ascending order.

Constraints
1 ≤ N ≤ 10⁵
for each number ai in the sequence, we’ve got -10⁹ ≤ ai ≤ 10⁹

*/

#include <iostream>
#include <algorithm>

using namespace std;

/*
void bubble_sort(int v[], int tam){

    bool sorted;
    do{
        sorted = true;
        for(int i = 0 ; i < tam-1 ; i++){
            if(v[i] > v[i+1]){
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                sorted = false;
            }
        }
    } while(!sorted);

}

void selection_sort(int v[], int tam){

    for(int i = 0 ; i < tam ; i++){
        long int menor = INT_FAST16_MAX;
        int ind, aux;
        for(int j = i ; j < tam ; j++){
            if(v[j] < menor) {
                menor = v[j];
                ind = j;
            }
        }
        aux = v[i];
        v[i] = menor;
        v[ind] = aux;
    }

}
*/

int main(){

    int N; cin >> N;
    int arr[112345];

    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }

    //bubble_sort(arr, N);
    //selection_sort(arr, N);
    sort(arr, arr+N);

    for(int i = 0 ; i < N ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}