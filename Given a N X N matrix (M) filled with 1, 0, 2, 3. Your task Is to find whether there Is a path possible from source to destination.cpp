/* Question description
Given a N X N matrix (M) filled with 1, 0, 2, 3. Your task Is to find whether there Is a path possible from source to destination, while traversing through blank cells only. You can traverse up, down, right and left. */

//Solution:

#include <bits/stdc++.h> 
using namespace std;
#define N 21 
int check(int i,int j,int n,int a[N][N])
{ 
    if(i<0 or j<0 or i>=n or j>=n or a[i][j]==0) 
    return 0; 
    if(a[i][j]==2) 
    return 1; 
    a[i][j]=0; 
   return  check(i,j+1,n,a) or check(i,j-1,n,a) or check(i-1,j,n,a) or check(i+1,j,n,a);
} 
int main()
{ 
    int t;
    cin>>t; 
    while(t--)
    { 
        int n,x,y;
        cin>>n; 
        int a[N][N];
        for(int i=0;i<n;++i) 
        { 
            for(int j=0;j<n;++j) 
            { 
                cin>>a[i][j]; 
                if(a[i][j]==1) 
                { 
                    x=i,y=j; 
                } 
            } 
        }
        cout<<check(x,y,n,a)<<endl; 
    } 
    return 0; 
}


















