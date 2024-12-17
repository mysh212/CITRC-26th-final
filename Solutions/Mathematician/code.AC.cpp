
#include <bits/stdc++.h>
using namespace std;
using Integar = string;
Integar operator+(const Integar &a, const Integar &b) {
    Integar A(a.rbegin(),a.rend()), B(b.rbegin(),b.rend());
    if(A.size() < B.size()) swap(A,B);
    while(B.size() < A.size()) B.push_back('0');
    vector<int> C(A.size() + 1);
    for(int i=0;i<A.size();i++) C[i] = (A[i] - '0') + (B[i] - '0');
    for(int i=0;i<C.size()-1;i++) 
        if(C[i] >= 10) C[i+1] += C[i] / 10, C[i] %= 10;
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    Integar Convert = "";
    for(auto digit : C) Convert.push_back('0'+digit);
    return Integar(Convert.rbegin(),Convert.rend());
}
int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(0);
    Integar A,B;
    cin >> A >> B;
    cout << A+B << '\n';
}