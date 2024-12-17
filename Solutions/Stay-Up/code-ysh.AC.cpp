// Author : ysh 
// Pre-compiled : 2024/12/12 Thu 18:00:00 
 
#include<bits/stdc++.h> 
# 1 "ccb.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "ccb.cpp"


using namespace std;
# 1 "C:\\Users\\ysh00\\Coding\\library/fib" 1

# 1 "C:\\Users\\ysh00\\Coding\\library/square" 1
unsigned long long __modnumber;
bool __mod = 0;

template<typename T>
struct t{
    vector<vector<T>>f;
    t(vector<vector<T>>&v) {
        f = move(v);
    }

    t(T n) {
        f.resize(n,vector<T>(n));
    }

    inline void mod(unsigned long long n) {
        __mod = 1;
        __modnumber = n;
        return;
    }

    inline t operator*(t x) {
        T n = x.f.size();
        t tmp = t(n);
        for(T i = 0;i<n;i++) {
            for(T j = 0;j<n;j++) {
                for(T k = 0;k < n;k++) {
                    tmp.f.at(i).at(j) += f.at(i).at(k) * x.f.at(k).at(j);
                    if(__mod) tmp.f.at(i).at(j) = tmp.f.at(i).at(j) % __modnumber;

                }
            }
        }
        return tmp;
    }

    inline void input(T n) {
        f.resize(n,vector<T>(n));
        for(T i = 0;i<n;i++) {
            for(T j = 0;j<n;j++) {
                cin>>f.at(i).at(j);
            }
        }
        return;
    }

    inline void print() {
        T n = f.size();
        for(T i = 0;i<n;i++) {
            for(T j = 0;j<n;j++) {
                cout<<f.at(i).at(j)<<" ";
            }
            cout<<"\n";
        }
        return;
    }

    inline t operator^(T k) {
        if(k == 1) return *this;
        t t = *this ^ (k >> 1);
        t = t * t;
        if(k & 1) {
            t = t * *this;
        }
        return t;
    }
};
# 3 "C:\\Users\\ysh00\\Coding\\library/fib" 2
using namespace std;
struct fib{
    unsigned long long ___mod = 0;
    unsigned long long operator() (unsigned long long x) {
        assert(x >= 0);
        if(x == 0) return 0;
        vector<vector<unsigned long long>>pre({{1,1},{1,0}});
        vector<vector<unsigned long long>>f({{1,0},{0,0}});
        t<unsigned long long>p(pre);
        t<unsigned long long>v(f);
        if(___mod != 0) {
            p.mod(___mod);
            v.mod(___mod);
        }
        return ((p ^ x) * v).f.at(1).at(0);
    }
    fib(unsigned long long x = 0):
        ___mod(x) {};
};
# 5 "ccb.cpp" 2
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;cin>>n;
    cout<<fib(int(1e9 + 7))(n + 2);
    return 0;
}
/*  
// Author : ysh
// 2024/12/12 Thu 17:56:25
#include<bits/stdc++.h>
using namespace std;
#include<fib>
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;cin>>n;
    cout<<fib(int(1e9 + 7))(n + 2);
    return 0;
}  
*/  
