/* Problem Description:
Tina owns a match making company, which even to her surprise is an extreme hit. She says that her success rate cannot be matched (Yes, letterplay!) in the entire match-making industry. She follows an extremely simple
algorithm to determine if two people are matches for each other. Her algorithm is not at all complex, and makes no sense - not even to her. But she uses it anyway. */

//Solution:

#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int t,n; 
    cin>>t; 
    while(t--){ 
        cin>>n; 
        int a[n],b[n],sum=0; 
        for(int i = 0;i<n;i++) 
        cin>>a[i]; 
        for(int i=0;i<n;i++) 
        cin>>b[i]; 
        sort(a,a+n); 
        sort(b,b+n); 
        for(int i=0;i<n;i++){ 
            if(a[i]%b[n-i-1]==0 || b[n-i-1]%a[i]==0) 
            sum++; 
        } 
        cout<<sum<<endl; 
    } 
    return 0; 
}
// NEVER FORGET TO STAR THIS REPO
