
#include <bits/stdc++.h>
using namespace std;
bool KMP_Algorithm(string &haystack, string &needle) {
    int lps[needle.size()];
    lps[0] = 0;
    int prev = 0, ptr = 1;
    while(ptr < needle.size()) {
        if(needle[ptr] == needle[prev]) 
            lps[ptr] = ++prev, ptr += 1; 
        else if(prev == 0) 
            lps[ptr] = 0, ptr += 1;
        else 
            prev = lps[prev-1];
    }
    int i = 0, j = 0;
    while(i < haystack.size()) {
        if(haystack[i] == needle[j]) 
            i += 1, j += 1;
        else 
            if(j == 0) i += 1;
            else j = lps[j-1];
        if(j == needle.size()) return 1;
    }
    return 0;
}
int main() {
    string a,b;
    cin >> a >> b;
    cout << (KMP_Algorithm(a,b)? "fake\n" : "real\n");
}