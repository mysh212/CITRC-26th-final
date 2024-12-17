// Author : ysh 
// Pre-compiled : 2024/12/09 Mon 13:23:33 
 
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

    string pre = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    int len = pre.size();

    int n = atoi(as[1]);
    for(int i = 0;i<2;i++) {
        int now = rnd.next(1,n);
        for(int j = 0;j<now;j++) {
            cout<<pre.at(rnd.next(0,len - 1));
        }
        cout<<"\n";
    }
    return 0;
}
/*  
// Author : ysh
// 2024/12/09 Mon 11:54:33
#include<bits/stdc++.h>
// #include<slow>
#include<testlib.h>
using namespace std;
int main(int ac,char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac,as,1);

    string pre = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    int len = pre.size();

    int n = atoi(as[1]);
    for(int i = 0;i<2;i++) {
        int now = rnd.next(1,n);
        for(int j = 0;j<now;j++) {
            cout<<pre.at(rnd.next(0,len - 1));
        }
        cout<<"\n";
    }
    return 0;
}  
*/  
