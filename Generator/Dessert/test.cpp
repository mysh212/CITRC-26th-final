// Author : ysh
// 2024/12/18 Wed 10:11:47
#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    int n = atoi(as[1]);
    int m = atoi(as[2]);
    int mmax = atoi(as[3]);
    bool p = atoi(as[4]) == 1;

    if(p) n = rnd.next(0,n);

    cout<<n<<"\n";
    while(n--) {
        int now = m;
        if(p) m = rnd.next(1,m);
        cout<<now<<" "<<rnd.next(1LL,1LL * mmax * now)<<"\n";
        while(now--) cout<<rnd.next(1,mmax)<<" \n"[now == 0];
    }

    return 0;
}