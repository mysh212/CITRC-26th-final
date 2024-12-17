// Author : ysh 
// Pre-compiled : 2024/12/09 Mon 13:24:58 
 
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

    string pre = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    int len = pre.size();

    int now = atoi(as[1]);

    if(now) goto yes;
    else goto no;

    int n,q;

    yes:
        n = q = 2;
        goto start;

    no:
        n = rnd.next(2, int(2e5));
        q = rnd.next(2, int(2e5));
        goto start;

    start:
        cout<<n<<" ";
        cout<<q<<"\n";

        set<string>f;
        while(f.size() < n) {
            string now = "";
            int l = rnd.next(1,100);
            for(int _ = 0;_<l;_++) now.push_back(pre.at(rnd.next(0,len - 1)));
            f.insert(now);
        }

        vector<string>ans(f.begin(),f.end());
        shuffle(ans.begin(),ans.end());

        for(auto &i : ans) {
            cout<<i<<" ";
            cout<<rnd.next(1,4)<<"\n";
        }

        for(int _ = 0;_<q;_++) {
            bool now = (rnd.next(0,1) == 1);
            if(now) {
                cout<<ans.at(rnd.next(0,n - 1))<<"\n";
            } else {
                string now = "";
                int l = rnd.next(1,100);
                for(int _ = 0;_<l;_++) now.push_back(pre.at(rnd.next(0,len - 1)));
                cout<<now<<"\n";
            }
        }

        return 0;
}
/*  
// Author : ysh
// 2024/12/09 Mon 12:25:05
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

    int now = atoi(as[1]);

    if(now) goto yes;
    else goto no;

    int n,q;

    yes:
        n = q = 2;
        goto start;

    no:
        n = rnd.next(2, int(2e5));
        q = rnd.next(2, int(2e5));
        goto start;
    
    start:
        outs(n);
        outl(q);

        set<string>f;
        while(f.size() < n) {
            string now = "";
            int l = rnd.next(1,100);
            re(l) now.push_back(pre.at(rnd.next(0,len - 1)));
            f.insert(now);
        }

        vc<string>ans(all(f));
        shuffle(all(ans));

        repo(&i, ans) {
            outs(i);
            outl(rnd.next(1,4));
        }

        re(q) {
            bool now = (rnd.next(0,1) == 1);
            if(now) {
                outl(ans.at(rnd.next(0,n - 1)));
            } else {
                string now = "";
                int l = rnd.next(1,100);
                re(l) now.push_back(pre.at(rnd.next(0,len - 1)));
                outl(now);
            }
        }

        return 0;
}  
*/  
