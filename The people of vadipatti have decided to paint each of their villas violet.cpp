/* Problem Description:
The people of vadipatti have decided to paint each of their villas violet, grey, or blue. They've also decided that no two neighboring villas will be painted the same color. The neighbors of villa i are villas i-1 and i+1. The
first and last villas are not neighbors.
You will be given the information of villas. Each villa will contain three integers "V G B" (quotes for clarity only), where V, G and B are the costs of painting the corresponding villa violet, grey, and blue, respectively. Return
the minimal total amount required to perform the work. */

//Solution :

#include<bits/stdc++.h> 
using namespace std; 
#define fainou ios_base::sync_with_stdio(false);cin.tie(NULL) 
#define ll long long 
#define mod 1000000007 

int main() { 
    fainou; 
    ll t; 
    cin >> t; 
    int case_num = 1; 
    while (t--) { 
        ll n; 
        cin >> n; 
        ll a[n][3], ans; 
        cin >> a[0][0] >> a[0][1] >> a[0][2]; 
        for (ll i = 1; i < n; i++) { 
            cin >> a[i][0] >> a[i][1] >> a[i][2]; 
            a[i][0] += min(a[i-1][1], a[i-1][2]); 
            a[i][1] += min(a[i-1][0], a[i-1][2]); 
            a[i][2] += min(a[i-1][0], a[i-1][1]); 
        } 
        ans = min(a[n-1][0], a[n-1][1]); 
        ans = min(a[n-1][2], ans); 
        cout << "Line " << case_num++ << ": " << ans << "\n"; 
        
    }
    return 0;
    cout<<"for(i=0;i<tc;i++)";
cout<<"for(j=0;j<N;j++)";
cout<<"for(j=1;j<N;j++)";
}
// NEVER FORGET TO STAR THIS REPO
