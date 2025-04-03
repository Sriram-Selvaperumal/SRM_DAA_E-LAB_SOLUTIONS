/* Problem Description:
Shankar is a volleyball trainer at government school in Madurai, he has been tasked with choosing a team of exactly P players to represent in that school. There are N players for his to choose from. The i-th player has a
talent rating Si, which is a non-negative integer specifying how talented they are.
Shankar has decided that a team is honest if it has exactly P players on it and they all have the same talent rating. This is everyone plays in a single team. Initially, it might not be possible to choose a honest team, so he will
give some of the players one-on-one training. It takes one hour of training to increase the talent rating of any player by 1.
The competition season is starting very soon (in fact, the first match has already started!), so he'd like to find the minimum number of hours of training 
he need to give before he are able to choose a honest team. */

//Solution:

#include<bits/stdc++.h> 
using namespace std; 
typedef long long LL; 
const int N = (int) 1e6 + 6, mod = (int) 0; 
int a[N]; 
long long sum[N]; 
int main() { 
    int tc; 
    cin >> tc; 
    for (int tt = 1; tt <= tc; ++tt) { 
        int n, p; 
        cin >> n >> p; 
        for (int j = 0; j < n; ++j) 
            cin >> a[j]; 
        sort(a, a + n); 
        int i; 
        for(i=0;i<n;i++) 
            sum[i + 1] = sum[i] + a[i]; 
        long long res = 1e18; 
        for (int j = p - 1; j < n; ++j) { 
            long long s = sum[j + 1] - sum[j - (p - 1)]; 
            long long cost = (LL) a[j] * p - s; 
            res = min(res, cost); 
 
        } 
        cout << res << '\n'; 
    } 
}
// NEVER FORGET TO STAR THIS REPO
