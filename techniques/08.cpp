/*

https://neps.academy/br/course/7/lesson/183

*/

#include<iostream>
#include<cstring>

#define ll long long

using namespace std;

int p, n;
int memo[2002][2002];
ll peso[2002], valor[2002];

ll dp(int obj, int resta){

    if(memo[obj][resta] >= 0) return memo[obj][resta];

    if(obj == n || !resta) return memo[obj][resta] = 0;

    if(peso[obj] <= resta)
        return memo[obj][resta] = max(valor[obj] + dp(obj + 1, resta - peso[obj]), dp(obj + 1, resta));

    return memo[obj][resta] = dp(obj + 1, resta);
}

int main(){

    cin >> p >> n;

    memset(memo, -1, sizeof(memo));

    for(int i = 0 ; i < n ; i++) cin >> peso[i] >> valor[i];

    cout << dp(0, p) << endl;

}