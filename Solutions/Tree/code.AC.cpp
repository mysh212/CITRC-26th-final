#include <bits/stdc++.h>
#define int int64_t
using namespace std;
signed main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    if(n == 0)
        return cout<<"Happy Birthday!\n", 0;
    for(int i=0;i<n;i++) {
        string s;
        cin >> s;
        int diff = 0;
        for(int j=0;j<s.size();j++) {
            if(j & 1) diff += s[j]-'0';
            else diff -= s[j]-'0';
        }
        diff = abs(diff);
        cout << (diff%11==0? "How perfect this plate is!\n" : "Broken\n");
    }
}