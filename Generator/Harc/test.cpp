// Author : ysh 
// Pre-compiled : 2024/12/09 Mon 13:22:48 
 
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
int main(int ac, char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    int n = 3;
    int s = atoi(as[1]);

    const string pre = "123567890QWERTYUIOPASDFGHJKLZXCVBNMqwetyiopasdfhjklzxcvbnm~!@#%^&*()_+{}|:\"<>?,./;'[]\\-=`'";
    int len = pre.size();
    set<int>st;

    for(int i = 0;i<n;i++) {
        int l = rnd.next(2, s);
        for(int _ = 0;_<l;_++) {
            cout<<pre.at(rnd.next(0, len - 1));
        }
        cout<<""<<" ";
        int now = rnd.next(1, int(1e2));
        while(st.find(now) != st.end()) now = rnd.next(1, int(1e6));
        st.insert(now);
        cout<<now<<"\n";
    }

    return 0;
}
/*  
// Author : ysh
// 2024/12/09 Mon 10:54:15
#include<bits/stdc++.h>
#include<slow>
#include<testlib.h>
using namespace std;
int main(int ac, char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    int n = 3;
    int s = atoi(as[1]);

    const string pre = "123567890QWERTYUIOPASDFGHJKLZXCVBNMqwetyiopasdfhjklzxcvbnm~!@#%^&*()_+{}|:\"<>?,./;'[]\\-=`'";
    int len = pre.size();
    set<int>st;

    re(i, n) {
        int l = rnd.next(0, s);
        re(l) {
            out(pre.at(rnd.next(0, len)));
        }
        outs("");
        int now = rnd.next(1, int(1e2));
        while(st.find(now) != st.end()) now = rnd.next(1, int(1e6));
        st.insert(now);
        outl(now);
    }

    return 0;
}  
*/  
