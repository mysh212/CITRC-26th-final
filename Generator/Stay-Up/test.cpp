// Author : ysh 
// Pre-compiled : 2024/12/09 Mon 13:24:15 
 
#include<bits/stdc++.h> 
#include"testlib.h" 
# 1 "ccb.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "ccb.cpp"


using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    int64_t a = atoll(as[1]);
    int64_t b = atoll(as[2]);

    cout<<rnd.next(a,b)<<"\n";
    return 0;
}
/*  
// Author : ysh
// 2024/12/09 Mon 12:00:16
#include<bits/stdc++.h>
#include<testlib.h>
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int64_t a = atoll(as[1]);
    int64_t b = atoll(as[2]);

    cout<<rnd.next(a,b)<<"\n";
    return 0;
}  
*/  
