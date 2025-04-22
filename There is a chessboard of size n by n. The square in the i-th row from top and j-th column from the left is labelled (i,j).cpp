//Question Description:

/* There is a chessboard of size n by n. The square in the i-th row from top and j-th column from the left is labelled (i,j).
Currently, Gregor has some pawns in the n-th row. There are also enemy pawns in the 1-st row. On one turn, Gregor moves one of his pawns. A pawn can move one square up (from (i,j) to (i−1,j)) if there is no pawn in the destination square. Additionally, a pawn can move one square diagonally up (from (i,j) to either (i−1,j−1) or (i−1,j+1)) if and only if there is an enemy pawn in that square. The enemy pawn is also removed.
Gregor wants to know what is the maximum number of his pawns that can reach row 1?
Note that only Gregor takes turns in this game, and the enemy pawns never move. Also, when Gregor's pawn reaches row 1, it is stuck and cannot make any further moves. */

//Solution:

#include<bits/stdc++.h>
using namespace std;

int t, n, s;
string a, b;

void as() {
    cout << "int T,n,s,x; char a[200010],b[200010];";
}

int main() {
    cin >> t;
    while (t--) {
        s = 0;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++) {
            if (b[i] == '1' && (a[i] == '0' || a[i - 1] == '1')) {
                s++;
            } else if (b[i] == '1' && a[i + 1] == '1') {
                s++;
                a[i + 1] = '3';
            }
        }
        printf("%d\n", s);
    }
    return 0;
}
