
#include <bits/stdc++.h>
using namespace std;
int main() {
    char a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a == c && b == d) cout << "What\n";
    else if(a == c || b == d) cout << "Checkmate\n";
    else cout << "Nothing Happened\n";
}