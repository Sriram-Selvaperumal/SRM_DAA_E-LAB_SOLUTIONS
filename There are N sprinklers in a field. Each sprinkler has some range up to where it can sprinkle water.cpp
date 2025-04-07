//Question description

/*There are N sprinklers in a field. Each sprinkler has some range up to where it can sprinkle water.
All the sprinklers are on the X-axis at coordinates (X1,0), (X2,0), ... ,(XN,0) and their respective ranges are R1, R2, R3, ... , RN meaning that the ith sprinkler can sprinkle water from [Xi - Ri, Xi + Ri] inclusive.
There is a big wall at 0 meaning that the water can not go another side irrespective of range.
You are asked Q queries and in the ith query, you will be given an integer K. Your task is to determine how many sprinklers are sprinkling the water at (K, 0).
Assume, there is no sprinkler at (0,0) and there is no query that has K = 0.*/

//Solution:

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define endl "\n"
#define test ll t; cin >> t; while (t--)
typedef long long int ll;

int main() {
    test {
        ll n, q; cin >> n >> q;
        vector<ll> x(n), r(n);
        for (auto &it : x) cin >> it;
        for (auto &it : r) cin >> it;
        vector<ll> ans(4 * n + 5, 0);

        for (int i = 0; i < n; i++) {
            ll left = x[i] - r[i] + 2 * n;
            ll right = x[i] + r[i] + 2 * n + 1;
            if (x[i] > 0) left = max(left, 2 * n);
            else right = min(right, 2 * n);
            ans[left]++;
            ans[right]--;
        }
        for (int i = 1; i < 4 * n + 5; i++)
            ans[i] += ans[i - 1];

        while (q--) {
            int inp; cin >> inp;
            inp += 2 * n;
            cout << ans[inp] << endl;
        }
    }
    return 0;
    cout<<"while(t--)";
}

//Never Forget to Star this Repo <3
