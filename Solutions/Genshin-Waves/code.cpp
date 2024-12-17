#include <bits/stdc++.h>
#define int int64_t
using namespace std;
signed main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(0);
    int s,n;
    cin >> s >> n;
    // A + B = S
    // 6480 A + 980 B = N
    for(int A=0;A<=n;A++) {
        int B = s-A;
        int get = 6480 * A + 980 * B;
        if(get == n)
            return cout<<A<<' '<<B,0;
    }
    cout << "-1 -1\n";
}