// Author : ysh 
// Pre-compiled : 2024/12/09 Mon 13:23:19 
 
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
    int p = atoi(as[2]);
    int from = atoi(as[3]);
    n--;

    for(int i = 0;i<2;i++) {
        int now = (p ? rnd.next(from, n) : n) - 1;
        cout<<rnd.next(1,9);
        for(int _ = 0;_<now;_++) cout<<rnd.next(1,9);
        cout<<"\n";
    }

    return 0;
}
/*  
// Author : ysh
// 2024/12/09 Mon 11:47:46
#include<bits/stdc++.h>
#include<slow>
#include<testlib.h>
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    int n = atoi(as[1]);
    int p = atoi(as[2]);
    int from = atoi(as[3]);
    n--;

    re(i,2) {
        int now = (p ? rnd.next(from, n) : n) - 1;
        out(rnd.next(1,9));
        re(now) out(rnd.next(1,9));
        nl;
    }

    return 0;
}  
*/  
