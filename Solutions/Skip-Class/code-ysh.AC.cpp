// Author : ysh
// 2024/12/09 Mon 14:44:02
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;cin>>a>>b;
    vector<pair<string,int>>f(a);
    for(auto &i : f) cin>>i.first>>i.second;

    map<string,int>m(f.begin(),f.end());
    while(b--) {
        string now;cin>>now;
        auto found = m.find(now);
        if(found == m.end()) cout<<0;
        else cout<<found->second;
        cout<<"\n";
    }

    string ans = "";
    int mmax,sig;mmax = sig = 0;
    for(auto &i : f) {
        if(i.second > mmax) {
            mmax = i.second;
            ans = i.first;
        }
        sig += i.second;
    }

    cout<<"total:"<<sig<<"\n";
    cout<<"most:"<<ans<<"\n";

    return 0;
}