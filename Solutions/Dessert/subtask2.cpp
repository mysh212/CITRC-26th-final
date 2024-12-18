// Author : ysh
// 2024/12/18 Wed 01:58:22
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    while(n--) {
        int n,k;cin>>n>>k;
        vector<int>f(n);

        int last = 0;
        for(int &i : f) cin>>i, i = last += i;

        int ans = 0;
        multiset<int>s({0});
        for(int &i : f) {
            ans = ans + s.count(i - k);
            s.insert(i);
        }

        cout<<ans<<"\n";
    }
    return 0;
}