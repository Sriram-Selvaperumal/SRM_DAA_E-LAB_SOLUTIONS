/*Problem Statement
Given Integer N, you need to find four Integers A,B,C,D, such that they're all factors of N (A|N,B|N,C|N,D|N), and N=A+B+C+D. Your goal Is to maxImlze AxBxCxD.*/

//Solution:

#include<bits/stdc++.h> 
using namespace std; 
void solve(){} 
int main(){ 
    int t; cin>>t; while(t--){ 
    long long n; cin>>n; 
    if(n&1 or n<4) cout<<"-1\n"; 
    else if(!(n%4)) cout<<((n>>2)*(n>>2)*(n>>2)*(n>>2))<<'\n'; 
    else if(!(n%6)) cout<<((n/6)*(n/6)*(n/3)*(n/3))<<'\n'; 
    else if(!(n%10)) cout<<((n/10)*(n/5)*(n/5)*(n>>1))<<'\n'; 
    else cout<<"-1\n"; 
  } 
  return 0; 
}













