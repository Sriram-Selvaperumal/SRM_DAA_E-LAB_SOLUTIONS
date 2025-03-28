/* Question Description:
Simon has given n numbers a1, a2, ... , an-
You can perform at most k operations.
For each operation you can multiply one of the numbers by x.
We want to make a | a2 | ... | an as large as possible, where denotes the bitwise OR.
Find the maximum possible value of a1, a2, ... , an after performing at most k operations optimally. */

//Solution:

#include <bits/stdc++.h>
using namespace std;

const int N = 200000;
int n, k, x;
long long z = 1, a[N + 9], pr[N + 9], Ans;

int main() {
    cin>>n>>k>>x;
    for (int i = 1; i <= n; i++) {
        cin>>a[i];
        pr[i] = pr[i - 1] | a[i];
    }

    // Repeatedly multiply z by x, k times
    while (k--) z *= x;

    long long sf = 0;
    for (int i = n; i >= 1; i--) {
        Ans = max(Ans, pr[i - 1] | (a[i] * z) | sf);
        sf |= a[i];
    }
    cout << Ans << endl;

    return 0;
}
