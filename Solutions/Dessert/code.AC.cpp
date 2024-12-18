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
        for(int &i : f) cin>>i;

        int sig = 0;
        int ans = 0;
        int l,r;l = r = -1;

        while(l != n - 1) {
            if(l != -1) sig -= f.at(l++);
            else l++;
            while(r != n - 1 && sig + f.at(r + 1) <= k) sig += f.at(++r);
            if(sig == k) ans++;
        }

        cout<<ans<<"\n";
    }
    return 0;
}