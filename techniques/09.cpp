/*

https://neps.academy/br/course/7/lesson/182

*/

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int car, fra, cont = 1;
int memo[52][1002];
int num[52];
int des[52];

int dp(int ind, int car){

    if(ind == fra || car <= 0) return 0;
    if(memo[ind][car] != -1) return memo[ind][car];

    if(num[ind] <= car) return memo[ind][car] = max(des[ind] + dp(ind + 1, car - num[ind]), 
                                                    dp(ind + 1, car));

    return memo[ind][car] = dp(ind + 1, car);
}

int main(){

    vector<int> ans;

    cin >> car >> fra;
    while(car && fra){

        memset(memo, -1, sizeof(memo));
        
        for(int i = 0 ; i < fra ; i++) cin >> num[i] >> des[i];

        int aux = dp(0, car);

        ans.push_back(aux);

        cin >> car >> fra;
    }

    for(auto x : ans){
        cout << "Teste " << cont++ << endl;
        cout << x << endl << endl;
    }
}