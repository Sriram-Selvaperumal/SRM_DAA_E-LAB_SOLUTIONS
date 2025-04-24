/* Question Description:
A sportsman starts from point Xstart= 0 and runs to point with coordinate Xfinish= m (on a straight line). Also, the sportsman can jump - to jump, he should first take a run of length of not less than s meters (in this case for these
s meters his path should have no obstacles), and after that he can jump over a length of not more than d meters. Running and jumping is permitted only in the direction from left to right. He can start andfinish a jump only at
the points with integer coordinates in which there are no obstacles. To overcome some obstacle, it is necessary to land at a point which is strictly to the right of this obstacle.
On the way of an athlete are n obstacles at coordinates x1, X2, ... , Xn. He cannot go over the obstacles, he can only jump over them. Your task is to determine whether the athlete will be able to get to the finish point. */

//Solution:

#include <bits/stdc++.h> 
using namespace std; 
const int N = 2e5+5; 
int p[N],par,x[N]; 
int main(){ 
    int n,i,m,s,d; 
    cin>>n>>m>>s>>d; 
    x[0]=-1; 
    for(i=1;i<=n;++i) 
        cin>>x[i]; 
    sort(x,x+n+1); 
    par = n; 
    for(i=n-1;i>=0;--i) 
        if(x[i+1]-x[i]>=s+2 && x[par]-x[i+1]<=d-2) 
            p[i]= par,par = i; 
    if(par>0){ 
        printf("IMPOSSIBLE\n"); 
    } 
    else{ 
        for(i=0;i<n;i= p[i]) 
            printf("RUN %d\nJUMP %d\n",x[i+1]-x[i]-2,x[p[i]]-x[i+1]+2); 
        if(x[n]+1<m) 
            printf("RUN %d\n",m-x[n]-1); 
    } 
    return 0; 
    cout<<"cin>>a[i];"; 
}

