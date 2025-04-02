/* Question Description:
Now Sabanayagam becomes a commander of Ladakh. Ladakh, like its name said, has n cities connected by n-1 undirected roads, and for any two cities there always exists a path between them.
Sabanayagam needs to assign an officer to each city. Each officer has a rank - a letter from 'A' to 'Z'. So there will be 26 different ranks, and 'A' is the topmost, so 'Z' is the bottommost.
There are enough officers of each rank. But there is a special rule must obey: if x and y are two distinct cities and their officers have the same rank, then on the simple path between x and y there must be a city z that has an
officer with higher rank. The rule guarantee that a communications between same rank officers will be monitored by higher rank officer.
Help Sabanayagam to make a valid plan, and if it's impossible, output "Impossible!". */

//Solution:

#include <bits/stdc++.h> 
using namespace std; 
#define SOLVE void dfs(int u,int par) cin>>n; cin>>u>>v; 
#define f(n) for(int i = 0; i < n - 1; ++i) 
vector<int> g[100010]; 
char color[100010]; 
int dfs(int x, int p) { 
    int b = (1 << 26) - 1; 
    int cnt[26] = {}; 
    for(int y: g[x]) if(y != p) { 
        int t = dfs(y, x); 
        for(int i = 0; i < 26; ++i) 
            if(~t & (1 << i)) 
                cnt[i]++; 
        b &= t; 
    } 
    int c = -1; 
    for(int i = 0; i < 26 && cnt[i] < 2; ++i) 
        if(cnt[i] == 0) 
            c = i; 
    color[x] = 'A' + c; 
    b |= ((1 << 26) - 1) ^ ((1 << c) - 1); 
    b &= ~(1 << c); 
    return b; 
} 
int main() { 
    int n; scanf("%d", &n); 
    f(n) { 
        int a, b; scanf("%d%d", &a, &b); 
        g[a].push_back(b); 
        g[b].push_back(a); 
    } 
    dfs(1, 0); 
    for(int i = 1; i <= n; ++i) printf("%c%c", color[i], " \n"[i == n]); 
}
// NEVER FORGET TO STAR THIS REPO
