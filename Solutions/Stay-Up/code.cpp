
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
using matrix = vector<vector<int>>;
static constexpr int mod = 1e9+7;
matrix operator*(const matrix &A, const matrix &B) {
    matrix C(A.size(), vector<int> (B[0].size(),0));
    for(int k=0;k<B.size();k++) {
        for(int i=0;i<A.size();i++) {
            for(int j=0;j<B[0].size();j++) {
                C[i][j] += A[i][k] * B[k][j] % mod;
                C[i][j] %= mod;
            }
        }
    }
    return C;
}
signed main() {
    int32_t n;
    cin >> n;
    matrix T = {{1,1},{1,0}}, Status = {{1},{1}};
    while(n) {
        if(n & 1) Status = T * Status;
        T = T * T;
        n >>= 1;
    }
    cout << Status[0][0]%mod << '\n';
}