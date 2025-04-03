/* Question Description:
Samantha has given an array of N elements, you must make it a co-prime array in as few moves as possible.
In each move you can insert any positive integral number you want not greater than 109 in any place in the array.
An array is co-prime if any two adjacent numbers of it are co-prime.
In the number theory, two integers a and b are said to be co-prime if the only positive integer that divides both of them is 1. */

//Solution:

#include<bits/stdc++.h> 
using namespace std; 
int n,x,p=1; 
int main(){ 
  vector<int>X; 
  for(cin>>n;cin>>x;X.push_back(p=x))if(__gcd(p,x)>1)X.push_back(1); 
  cout<<X.size()-n<<endl; 
  for(int x:X)cout<<x<<" "; 
  return 0; 
  cout<<"cin>>y[i];"; 
}
// NEVER FORGET TO STAR THIS REPO
