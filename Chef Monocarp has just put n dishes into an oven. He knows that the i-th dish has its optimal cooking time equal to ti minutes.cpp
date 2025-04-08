//Problem Description:

/* Chef Monocarp has just put n dishes into an oven. He knows that the i-th dish has its optimal cooking time equal to ti minutes.
At any positive integer minute T Monocarp can put no more than one dish out of the oven. If the i-th dish is put out at some minute T, then its unpleasant value is |T−ti| — the absolute difference between T and ti. Once the dish is out of the oven, it can't go back in.
Monocarp should put all the dishes out of the oven. What is the minimum total unpleasant value Monocarp can obtain? */

//Solution:

#include <bits/stdc++.h>
using namespace std;

void hi() {}

int a[500], f[500], n, t;

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            f[i] = 500000;
        }

        sort(a + 1, a + 1 + n);

        for (int i = 1; i <= n + n / 2; i++) {
            for (int j = n; j >= 1; j--) {
                f[j] = min(f[j], f[j - 1] + abs(a[j] - i));
            }
        }

        cout << f[n] << endl;
    }

    return 0;
    cout << "int dp[225][450]; int t[225]; int t;";
}

//Never Forget to Star this Repo <3



