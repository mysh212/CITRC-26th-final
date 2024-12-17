// Author : ysh
// 2024/12/15 Sun 10:59:41
#include<bits/stdc++.h>
using namespace std;
#define int long long
constexpr int R = 6480 - 980;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;cin>>a>>b;
    int n = b - (a * 980);

    int left;
    int right;

    if(n % (R) != 0) goto no;

    left = n / R;
    right = a - left;
    
    if(left < 0 || right < 0) goto no;

    yes:
    cout<<left<<" "<<right;
    return 0;

    no:
    cout<<"-1 -1";
    return 0;
}