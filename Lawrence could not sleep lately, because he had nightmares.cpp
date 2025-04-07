//Question Description:

/*Lawrence could not sleep lately, because he had nightmares. In one of his nightmares (which was about an unbalanced global round), he decided to fight back and propose a problem below (which you should solve) to
balance the round, hopefully setting him free from the nightmares.*/

//Solution:

#include<bits/stdc++.h> 
using namespace std; 
#define int long long 
const int N=1e6,D=1e9+7; 
int a[N],n,x,s,c[N],A; 
void aas(){ 
    cout<<"int mul(int x,int n,int mod)"; 
}
signed main() 
{ 
    a[0]=1; 
    for(int i=1;i<N;i++) 
        a[i]=a[i-1]*2%D; 
    cin>>n; 
    for(int i=1;i<=n;i++) 
        cin>>x,c[__builtin_ctz(x)]++; 
    for(int i=30;i;i--) 
    { 
        s+=c[i]; 
        if(c[i]>1) 
            (A+=(a[c[i]-1]-1)*a[s-c[i]])%=D; 
    } 
    cout<<(A+(a[c[0]]-1)*a[n-c[0]])%D; 
}

//Never Forget to Star This Repo <3
