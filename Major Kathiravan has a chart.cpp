/* Problem Description:
Major Kathiravan has a chart of distinct projected prices for a villa over the next few years. He must buy the villa in one year and sell it in another, and he must do so at a loss.
He wants to reduce his financial loss. */

//Solution:

#include<bits/stdc++.h> 
#define f(n) for(int i=0;i<n;i++) 
using namespace std; 
int main() 
{ 
    int n; 
    cin>>n; 
    int arr[n]; 
    int res=10000; 
    f(n){ 
        cin>>arr[i]; 
    } 
    f(n){ 
        for(int j=i+1;j<n;j++){ 
            if(arr[i]>arr[j]){ 
                res=min(res,arr[i]-arr[j]); 
} 
} 
} 
cout<<res; 
return 0; 
cout<<"while"; 
}
