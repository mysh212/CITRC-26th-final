
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> f(n);
    for(int &i : f) cin >> i;
    reverse(f.begin(),f.end());
    for(int &i : f) cout << i << ' ';
}