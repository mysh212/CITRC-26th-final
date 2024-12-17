#include <bits/stdc++.h>
#define int int64_t
using namespace std;
static constexpr int MAXN = 2e5+5, INF = 1e18;
int n, Kita[MAXN], Bocchi[MAXN], Yamada[MAXN];
vector<int> g[MAXN];
char role[MAXN];
void dfs(int cur, int from) {
    for(auto &nxt : g[cur]) {
        if(nxt == from) continue;
        dfs(nxt,cur);
        if(role[cur] == 'Y') {
            Kita[cur] += min({Kita[nxt], Bocchi[nxt]+1, Yamada[nxt]});
            Bocchi[cur] += min({Kita[nxt]+1, Bocchi[nxt], Yamada[nxt]});
            Yamada[cur] += min({Kita[nxt]+1, Bocchi[nxt]+1, Yamada[nxt]});
        }else if(role[cur] == 'B') {
            Kita[cur] = Yamada[cur] = INF;
            Bocchi[cur] += min({Kita[nxt]+1, Bocchi[nxt], Yamada[nxt]});
        }else {
            Bocchi[cur] = Yamada[cur] = INF;
            Kita[cur] += min({Kita[nxt], Bocchi[nxt]+1, Yamada[nxt]});
        }
    }
    if(role[cur] == 'K') Bocchi[cur] = Yamada[cur] = INF;
    if(role[cur] == 'B') Kita[cur] = Yamada[cur] = INF;
}
signed main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(0);
    memset(Kita, 0, sizeof(Kita));
    memset(Bocchi, 0 ,sizeof(Bocchi));
    memset(Yamada, 0, sizeof(Yamada));
    cin >> n;
    for(int i=1;i<n;i++) {
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i=1;i<=n;i++) cin >> role[i];
    dfs(1,0);
    cout << min({Kita[1], Bocchi[1], Yamada[1]}) << '\n';
}  