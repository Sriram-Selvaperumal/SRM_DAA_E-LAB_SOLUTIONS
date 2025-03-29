/* Question Description:
The VJ Media isn't very popular in Indiland. The cities get news from messengers who can only travel along roads. The network of roads in Indiland is built so that it is possible to get to any city from any other one in exactly
one way, and the roads' lengths are equal.
The North Pole governor decided to carry out an information reform. Several cities were decided to be chosen and made regional centers. Maintaining a region center takes k fishlars (which is a local currency) per year. It is
assumed that a regional center always has information on the latest news.
For every city which is not a regional center, it was decided to appoint a regional center which will be responsible for keeping this city informed. In that case the maintenance costs will be equal to dien fishlars per year,
where len is the distance from a city to the corresponding regional center, measured in the number of roads along which one needs to go.
Your task is to minimize the costs to carry out the reform. */

//Solution:

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define MP make_pair
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;

const int INF = 1e9 + 7;
int N, K;
int d[205], dist[205][205];
int f[205][205], g[205], cent[205];
vector<int> G[205];

void dfs_dist(int ori, int v, int par, int dis) {
    dist[ori][v] = dis;
    rep(i, G[v].size()) {
        int u = G[v][i];
        if (u == par) continue;
        dfs_dist(ori, u, v, dis + 1);
    }
}

void dfs(int v, int par = -1) {
    rep1(i, N) f[v][i] = d[dist[v][i]];
    rep(i, G[v].size()) {
        int u = G[v][i];
        if (u == par) continue;
        dfs(u, v);
        rep1(j, N) {
            f[v][j] += min(f[u][j], g[u]);
        }
    }
    g[v] = INF;
    rep1(i, N) {
        if ((par == -1 || dist[v][i] < dist[par][i] + 1) && f[v][i] + K < g[v]) {
            g[v] = f[v][i] + K;
            cent[v] = i;
        }
    }
}

void dump(int v, int par, int centre) {
    cent[v] = centre;
    rep(i, G[v].size()) {
        int u = G[v][i];
        if (u == par) continue;
        dump(u, v, g[u] < f[u][centre] ? cent[u] : centre);
    }
}

int main() {
    scanf("%d%d", &N, &K);
    d[0] = 0;
    rep1(i, N - 1) scanf("%d", &d[i]);
    rep(i, N - 1) {
        int u, v;
        scanf("%d%d", &u, &v);     G[u].push_back(v);      G[v].push_back(u);  } rep1(i, N) dfs_dist(i, i, -1, 0); dfs(1, 1); printf("%d\n", g[1]); dump(1, 1, cent[1]); rep1(i, N) printf("%d ", cent[i]);  printf("\n"); return 0;
 cout<<"void init() cin>>n>>k;";   }
