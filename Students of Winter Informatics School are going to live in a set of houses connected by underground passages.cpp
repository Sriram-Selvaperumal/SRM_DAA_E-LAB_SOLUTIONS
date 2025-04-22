//Question Description:

/* Students of Winter Informatics School are going to live in a set of houses connected by underground passages. Teachers are also going to live in some of these houses, but they can not be accommodated randomly. For safety reasons, the following must hold:
All passages between two houses will be closed, if there are no teachers in both of them. All other passages will stay open.
It should be possible to travel between any two houses using the underground passages that are open.
Teachers should not live in houses, directly connected by a passage.
Please help the organizers to choose the houses where teachers will live to satisfy the safety requirements or determine that it is impossible. */

//Solution:

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> vis;
int cnt;

void dfs(int node, int color) {
    vis[node] = color;
    cnt++;
    for (int neighbor : adj[node]) {
        if (vis[neighbor] == -1) {
            dfs(neighbor, 1 - color);
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        adj.clear();
        vis.clear();
        cnt = 0;
        int n, m;
        scanf("%d%d", &n, &m);
        adj.resize(n + 1);
        vis.resize(n + 1, -1);
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vis[0] = 0;
        dfs(1, 0);
        if (cnt != n) {
            cout << "NO\n";
            continue;
        }
        vector<int> res;
        for (int i = 1; i <= n; i++) {
            if (vis[i] == 1) res.push_back(i);
        }
        for (unsigned int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
}
