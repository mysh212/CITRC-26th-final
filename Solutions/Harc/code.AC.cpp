
#include <bits/stdc++.h>
using namespace std;
int main() {
    pair<int,string> a,b,c;
    cin >> a.second >> a.first;
    cin >> b.second >> b.first;
    cin >> c.second >> c.first;
    cout << max({a,b,c}).second << '\n';
}