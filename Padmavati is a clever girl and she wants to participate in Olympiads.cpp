/* Question Description:
Padmavati is a clever girl and she wants to participate in Olympiads this year. Of course she wants her partner to be clever too (although he's not)! Padmavati has prepared the following test problem for Sativathi.
There is a sequence a that consists of n integers a1, a2, ... , an- Let's denote f/, r, x) the number of indices k such that: /sks rand ak=x. His task is to calculate the number of pairs of indicies i, j(1 ≤i<j≤ n) such that f1, i,
a > fj, n, al. */

//Solution:

#include <iostream> 
#include <map> 
using namespace std; 
const int N=1<<20; 
int n,a[N],c[N],w; 
void upd(int i,int c){ 
} 
int main(){ 
cin>>n; 
for(int i=0;i<n;++i)cin>>a[i]; 
map<int,int>u,v; 
for(int i=n;i-->0;){ 
int x=++u[a[i]]; 
while(x<N)++c[x],x+=x&-x; 
} 
for(int i=0;i<n;++i){ 
int x=u[a[i]]--,y=v[a[i]]++; 
while(x<N)--c[x],x+=x&-x; 
while(y>0)w+=c[y],y-=y&-y; 
} 
cout<<w<<endl; 
}
// NEVER FORGET TO STAR THIS REPO
