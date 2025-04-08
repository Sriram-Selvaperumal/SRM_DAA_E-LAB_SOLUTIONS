//Problem De3scription:

/* Little X has n distinct Integers: P1, P2, ... , Pa. He wants to divide all of them Into two sets A and B. The following two conditions must be satisfled:
. If number x belongs to set A, then number a-x must also belong to set A.
. If number x belongs to set B, then number b-x must also belong to set B. */

//Solution:

#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;  
const int maxn=1e5+1;  
queue<int>q; 
int a,b,num[maxn]; 
map<ll,ll>A; 
void aa(){ 
} 
int main(){ 
    int n; 
    scanf("%d%d%d",&n,&a,&b); 
    for(int i=1;i<=n;++i) 
    scanf("%d",&num[i]),A[num[i]]++; 
    for(int i=1;i<=n;++i) 
    if(A[num[i]]>0&&A[a-num[i]]==0) q.push(num[i]); 
    while(!q.empty()) 
    { 
        int t=q.front(); 
        q.pop(); 
        if(A[t]>0&&A[a-t]==0&&A[b-t]==0) { 
            puts("NO");return 0; 
        }  
        A[t]--;A[b-t]--; 
        if(A[b-t]==0&&A[a-b+t]>0) q.push(a-b+t); 
    } 
    puts("YES"); 
    for(int i=1;i<=n;++i) 
    { 
        printf("%d ",A[num[i]]>0?0:1); 
        A[num[i]]--; 
     }  
}



//Never Forget to Star this Repo <3















