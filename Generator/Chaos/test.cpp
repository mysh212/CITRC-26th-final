// Author : ysh 
// Pre-compiled : 2024/12/09 Mon 13:24:41 
 
#include<bits/stdc++.h> 
#include"testlib.h" 
# 1 "ccb.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "ccb.cpp"


# 1 "C:\\Users\\ysh00\\Coding\\library/slow" 1
# 38 "C:\\Users\\ysh00\\Coding\\library/slow"
template<class T>
std::istream& operator>>(std::istream& fin,std::vector<T>&f) {
    for(auto &&i : f) fin>>i;
    return fin;
}
template<class T,class R>
std::istream& operator>>(std::istream& fin,std::pair<T,R>&x) {
    fin>>x.first>>x.second;
    return fin;
}

template<class T>
std::ostream& operator<<(std::ostream& fout,std::vector<T>&f) {
    for(auto &i : f) fout<<i<<" ";
    return fout;
}
template<class T,class R>
std::ostream& operator<<(std::ostream& fout,std::pair<T,R>&x) {
    fout<<x.first<<" "<<x.second;
    return fout;
}
# 4 "ccb.cpp" 2
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);
    
    int n = atoi(as[1]);
    int m = atoi(as[2]);
    int k = atoi(as[3]);
    int kk = atoi(as[4]);

    string pre = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    int len = pre.size();

    bool ans = (rnd.next(0,1) == 1);

    if(ans) goto yes;
    else goto no;

    yes: {
        string a = "";
        int now = rnd.next(k, int(n));

        for(int _ = 0;_<now;_++) a.push_back(pre.at(rnd.next(0,len - 1)));
        int l,r;
        l = rnd.next(0,now - 1);
        r = rnd.next(l,l + m - 1);

        if(l > r) swap(l,r);
        cout<<a<<"\n";
        cout<<a.substr(l, r - l + 1)<<"\n";
    }
    return 0;

    no:
        int now = rnd.next(k, int(n));
        for(int i = 0;i<now;i++) cout<<pre.at(rnd.next(0,len - 1));
        cout<<"\n";
        now = rnd.next(kk, min(int(m),now));
        for(int i = 0;i<now;i++) cout<<pre.at(rnd.next(0,len - 1));
        cout<<"\n";

    return 0;
}
/*  
// Author : ysh
// 2024/12/09 Mon 12:13:25
#include<bits/stdc++.h>
#include<slow>
#include<testlib.h>
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    string pre = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    int len = pre.size();

    bool ans = (rnd.next(0,1) == 1);

    if(ans) goto yes;
    else goto no;

    yes: {
        string a = "";
        int now = rnd.next(1, int(1e2));

        re(now) a.push_back(pre.at(rnd.next(0,len - 1)));
        int l,r;
        l = rnd.next(0,now - 1);
        r = rnd.next(0,now - 1);

        if(l > r) swap(l,r);
        outl(a);
        outl(a.substr(l, r - l + 1));
    }
    return 0;
    
    no:
        re(2) {
            int now = rnd.next(1, int(1e2));
            re(i,now) out(pre.at(rnd.next(0,len - 1)));
            nl;
        }

    return 0;
}  
*/  
