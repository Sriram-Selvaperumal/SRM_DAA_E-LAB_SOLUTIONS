/* Problem Description:
There are 'N' integers in an array A. All but one integer occur in pairs. Your task is to find the number that occurs only once.
Constraints:
1 <= N<100
N%2 = 1 (N is an odd number)
0 <= A[i] <= 100, i € [1, N] */

//Solution :

#include <iostream> 
using namespace std; 
int main() 
{ 
int n,i;cin>>n;int arr[n]; 
for(i=0;i<n;i++) 
cin>>arr[i]; 
int res=arr[0]; 
for(i=1;i<n;i++) 
res=res^arr[i]; 
cout<<res; 
return 0; 
if(1<0) 
cout<<"break;";}
