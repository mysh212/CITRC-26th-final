// Author : ysh 
// Pre-compiled : 2024/12/09 Mon 13:24:24 
 
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

    const int N = 8;

    for(int _ = 0;_<2;_++) cout<<"abcdefgh"[rnd.next(0,N - 1)]<<" "<<rnd.next(1,N)<<"\n";
}
/*  
// Author : ysh
// 2024/12/09 Mon 12:03:56
#include<bits/stdc++.h>
#include<slow>
#include<testlib.h>
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    const int N = 8;

    re(2) cout<<"abcdefgh"[rnd.next(0,N - 1)]<<" "<<rnd.next(1,N)<<"\n";
}  
*/  
