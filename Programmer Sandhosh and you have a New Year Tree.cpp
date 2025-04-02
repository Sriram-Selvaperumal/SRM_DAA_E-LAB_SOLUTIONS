/* Question Description:
Programmer Sandhosh and you have a New Year Tree (not the traditional fur tree, though) a tree of four vertices: one vertex of degree three (has number 1), connected with three leaves (their numbers are from 2 to 4).
On the New Year, programmers usually have fun. You decided to have fun as well by adding vertices to the tree. One adding operation looks as follows:
. First we choose some leaf of the tree with number v.
. Let's mark the number of vertices on the tree at this moment by variable n, then two vertexes are added to the tree, their numbers are n+ 1 and n+2, also you get new edges, one between vertices vand n+ 1 and
one between vertices vand n +2. */

//Solution:

#include <iostream>
using namespace std;

int L[1000005], N = 4, P[1000005][20], Q, v, i, p = 2, q = 3, d = 2;

int f(int a, int b) {
    if (L[a] < L[b]) swap(a, b);
    for (i = 0; i < 20; i++) if ((L[a] - L[b]) & (1 << i)) a = P[a][i];
    for (i = 19; i >= 0; i--) if (P[a][i] != P[b][i]) a = P[a][i], b = P[b][i];
    return P[a][0];
}

int main() {
    L[2] = L[3] = L[4] = 1;
    P[2][0] = P[3][0] = P[4][0] = 1;
    cin >> Q;
    while (Q--) {
        cin >> v;
        L[N + 1] = L[N + 2] = L[v] + 1;
        P[N + 1][0] = P[N + 2][0] = v;
        N += 2;
        for (i = 1; i < 20; i++) {
            P[N][i] = P[P[N][i - 1]][i - 1];
            P[N - 1][i] = P[P[N - 1][i - 1]][i - 1];
        }
        if (L[N] + L[p] - 2 * L[f(N, p)] > d) q = N, d++;
        if (L[N] + L[q] - 2 * L[f(N, q)] > d) p = N, d++;
        cout << d << "\n";
    }
    return 0;
    cout<<"int lca(int x,int y)";
    cout<<"int dis(int x,int y)";
    cout<<"cin>>u;";
}
// NEVER FORGET TO STAR THIS REPO
