//Question Description:
/* An undirected graph, consisting of N vertices and m edges. We will consider the graph's vertices numbered with integers
from 1 to N. Each vertex of the graph has a color. 
The color of the i-th vertex is an integer ci.*/

//Solution:

#include <bits/stdc++.h>
using namespace std;

set<int> s[100005];
int a[100005], n, m, i = 1, x, y;

int main() {
    cin >> n >> m;
    for (; i <= n; cin >> a[i++]);
    for (; m-- && cin >> x >> y;) {
        if (a[x] != a[y]) {
            s[a[x]].insert(a[y]);
            s[a[y]].insert(a[x]);
        }
    }
    int ans = -1;
    for (int i = 1; i <= n; ++i) {
        if (ans == -1 || s[a[i]].size() > s[ans].size() || 
            (s[a[i]].size() == s[ans].size() && a[i] < ans)) {
            ans = a[i];
        }
    }
    cout << ans;
}

