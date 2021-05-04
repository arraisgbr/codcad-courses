/*

https://neps.academy/br/course/10/lesson/275

*/

#include<iostream>
#include<map>

#define ll long long

using namespace std;

 int main(){

    int c, n; cin >> c >> n;
    ll app, version;
    map<ll, ll> apps;
    map<ll, ll> internet;
    map<ll, ll> toInstall;

    for(int i = 0 ; i < c ; i++){
        cin >> app >> version;
        apps.insert(make_pair(app, version));
    }

    for(int i = 0 ; i < n ; i++){
        cin >> app >> version;
        if(apps.find(app) == apps.end())
            toInstall[app] = version;
        else if(apps.find(app)->second < version && toInstall[app] < version)
            toInstall[app] = version;
    }

    for(auto x : toInstall) cout << x.first << " " << x.second << endl;
    
 }