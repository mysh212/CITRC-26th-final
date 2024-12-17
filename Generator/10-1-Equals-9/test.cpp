// Author : ysh 
// Pre-compiled : 2024/12/09 Mon 13:24:33 
 
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

    string pre = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    int len = pre.size();

    n = rnd.next(0,n);
    cout<<n<<"\n";
    for(int i = 0;i<n;i++) {
        int now = rnd.next(1,100);
        for(int _ = 0;_<now;_++) cout<<pre.at(rnd.next(0,len - 1));
        cout<<""<<" ";
        cout<<rnd.next(0,10)<<"\n";
    }

    return 0;
}
/*  
// Author : ysh
// 2024/12/09 Mon 12:07:51
#include<bits/stdc++.h>
#include<slow>
#include<testlib.h>
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    int n = atoi(as[1]);

    string pre = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    int len = pre.size();

    n = rnd.next(0,n);
    outl(n);
    re(i,n) {
        int now = rnd.next(1,100);
        re(now) out(pre.at(rnd.next(0,len - 1)));
        outs("");
        outl(rnd.next(0,10));
    }

    return 0;
}  
*/  
