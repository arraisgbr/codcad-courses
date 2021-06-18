/*

https://neps.academy/br/course/tecnicas-de-programacao-(codcad)/lesson/maior-ancestral-comum

*/

#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int arr1[1123], arr2[1123];

int pd[1123][1123];

int lcs(int n, int m){

    if(pd[n][m] >= 0) return pd[n][m];

    if(n == 0 || m == 0) return 0;
    
    if(arr1[n] == arr2[m]) return pd[n][m] = 1 + lcs(n-1, m-1);
    
    return pd[n][m] = max(lcs(n-1, m), lcs(n, m-1));

}

int main(){
    
    int n, m; cin >> n >> m;

    memset(pd, -1, sizeof(pd));

    for(int i = 1 ; i <= n ; i++) cin >> arr1[i];
    for(int i = 1 ; i <= m ; i++) cin >> arr2[i];

    int tam = lcs(n, m);

    cout << n - tam << " " << m - tam << endl;

}