// Author : ysh
// 2024/12/15 Sun 04:04:14
#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    cout<<rnd.next(1, int(2e5))<<" "<<rnd.next(980LL, int64_t(1e10))<<"\n";
}