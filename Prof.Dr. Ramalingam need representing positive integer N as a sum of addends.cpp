/* Question Description:
Prof.Dr. Ramalingam need representing positive integer N as a sum of addends, where each addends is an integer number containing only 1s.
For example, he can represent 121 as 121=111+11+-1. Help him to find the least number of digits 1 in such sum. */

//Solution:

#include <bits/stdc++.h> 
using namespace std; 
  
long long n,a[17]; 
  
int dfs(long long n,int x) 
{
    int num=n/a[x];n%=a[x]; 
 if (!n) return num*x; 
 return num*x+min(x+dfs(a[x]-n,x-1),dfs(n,x-1));
} 
void Init(){ 
     scanf("%lld",&n); 
 for (int i=1;i<=16;i++) a[i]=a[i-1]*10+1; 
 printf("%d\n",dfs(n,16));}  
int main() 
{ 
Init(); 
 return 0; 
}
// NEVER FORGET TO STAR THIS REPO
