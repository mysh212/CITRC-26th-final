// Author : ysh
// 2024/12/17 Tue 00:13:41
#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;
int main(int ac, char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerTestlibCmd(ac,as);

    int n = 0;
    string j, p;

    if(ouf.seekEof()) quitf(_wa, "你啥都沒輸出");

    ouf.readLineTo(p);
    if(p != "Yes, I love CITRC so much.(\\\\\\>.<\\\\\\)" && p != "Yes, I love CITRC so much.(\\\\\\>.<\\\\\\)\\n") quitf(_wa, "密碼錯誤");
 
    if (!ans.seekEof() && !ouf.seekEof()) 
    {
        n++;
 
        ans.readWordTo(j);
        ouf.readWordTo(p);

        bool c = 0;
        int ans = 0;
        
        for(char i : p) {
            if(!isdigit(i) && i != '.') quitf(_wa, "給不了你這分數");
            if(!c && i == '.') c = 1;
            if(c && i == '.') quitf(_wa, "你輸出這啥");

            if(!c) ans = (ans * 10) + (i & 15);
            if(ans > 100) break;
        }

        if(ans > 100) quitf(_wa, "破表了，這是多出來的0.1分");
        if(ans < 0) quitf(_wa, "輸出負的是要我扣你分是吧");

        int now = stoi(j);

        if(now <= ans) quitf(_ok, "給分ouob");
        else quitf(_wa, "如你所願:D");
    }
    
    quitf(_wa, "server 炸了");
}