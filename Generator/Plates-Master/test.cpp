// Author : ysh
// 2024/12/15 Sun 04:00:47
#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);
    
    int n = atoi(as[1]);

    n = rnd.next(2, n - 1);

    {
    int root = rnd.next(0, n - 1);
    vector<int>re(n, -1);
    int t = -1;
    for(int &i : re) i = (t == -1 ? -1, t++ : rnd.next(0, t++));
    // re.at(root) = -1;

    vector<pair<int,int>>f;
    for(int i = 0;i<n;i++) {
        if(re.at(i) != -1) f.push_back({i, re.at(i)});
    }

    cout<<n<<"\n";
    shuffle(f.begin(),f.end());
    for(auto &i : f) {
        cout<<i.first + 1<<" "<<i.second + 1<<"\n";
    }
    }
    return 0;
}