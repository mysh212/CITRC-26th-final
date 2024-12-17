// Author : ysh
// 2024/12/15 Sun 03:50:06
#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    int n = atoi(as[1]);
    int l = atoi(as[2]);

    if(n == 0) return cout<<"0\n",0;

    n = rnd.next(1,n);
    cout<<n<<"\n";
    for(int i = 0;i<n;i++) {
        int now = rnd.next(1,l);
        cout<<rnd.next(1,9);
        for(int j = 0, len = now - 1;j<len;j++) {
            cout<<rnd.next(0,9);
        }
        cout<<" \n"[i == n - 1];
    }

    return 0;
}