/* Problem Description:
Ganesan has a string S consisting of lowercase English letters.
On this string, he will do the operation below just once.
. First, choose a non-negative integer K.
. Then, shift each character of S to the right by K (see below). */

//Solution :

#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    string s,s2; 
    cin>>s>>s2; 
    int z = s.length(); 
    int i; 
    int a[z]; 
    for(i=0;i<(int)s.length();i++){ 
        a[i]=s[i+1]-s[i]; 
    } 
    for(int i=0;i<z-2;i++){ 
        if(a[i]!=a[i+1]){ 
        cout<<"No"; 
        return 0;} 
    } 
    cout<<"Yes"; 
    return 0; 
}
