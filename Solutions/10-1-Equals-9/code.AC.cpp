
#include <bits/stdc++.h>
int main() {
    int n;
    std::cin >> n;
    while(n--) {
        std::string name;
        int times;
        std::cin >> name >> times;
        while(times--) {
            std::cout << "@" << name << '\n';
        }
    }
}