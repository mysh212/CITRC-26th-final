// Author : ysh 
// Pre-compiled : 2024/12/09 Mon 13:18:10 
 
#include<bits/stdc++.h> 
#include"testlib.h" 
# 1 "ccb.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "ccb.cpp"



using namespace std;
int main(int ac, char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    int n = atoi(as[1]);
    int p = atoi(as[2]);
    int ez = atoi(as[3]);

    if(p) n = rnd.next(2, n - 1);

    if(ez) {
        vector<int>f(n);
        iota(f.begin(),f.end(),0);
        shuffle(f.begin(),f.end());

        vector<pair<int,int>>ans;
        for(int i = 1;i<n;i++) {
            ans.push_back({f.at(i - 1), f.at(i)});
        }

        cout<<n<<"\n";
        for(auto &i : ans) cout<<i.first + 1<<" "<<i.second + 1<<"\n";
        goto str;
    }
    {
    int root = rnd.next(0, n - 1);
    vector<int>re(n, -1);
    int t = -1;
    for(int &i : re) i = (t == -1 ? t++ : rnd.next(0, t++));


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

    str:
    string pre = "YBK";
    for(int i = 0;i<n;i++) {
        cout<<pre.at(rnd.next(0, 2));
    }
    cout<<"\n";
    return 0;
}
/*  
// Author : ysh
// 2024/12/09 Mon 10:37:42
#include<bits/stdc++.h>
// #include<slow>
#include<testlib.h>
using namespace std;
int main(int ac, char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);
    
    int n = atoi(as[1]);
    int p = atoi(as[2]);
    int ez = atoi(as[3]);

    if(p) n = rnd.next(2, n - 1);

    if(ez) {
        vector<int>f(n);
        iota(f.begin(),f.end(),0);
        shuffle(f.begin(),f.end());

        vector<pair<int,int>>ans;
        for(int i = 1;i<n;i++) {
            ans.push_back({f.at(i - 1), f.at(i)});
        }

        cout<<n<<"\n";
        for(auto &i : ans) cout<<i.first<<" "<<i.second<<"\n";
        goto str;
    }
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

    str:
    string pre = "YBK";
    for(int i = 0;i<n;i++) {
        cout<<pre.at(rnd.next(0, 2));
    }
    return 0;
}  
*/  
