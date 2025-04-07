/* Problem statement
Lucky numbers are defined as the numbers consisting only of digits 3 and 5. So, given a number N, you have to print the least lucky number strictly greater than N. */

//Solution:

#include<bits/stdc++.h> 
using namespace std; 
  
string solve(string& s) 
{ 
    int n = s.size(), i = 0; 
    while(i < n && (s[i] == '3' || s[i] == '5')) 
    ++i; 
    if(i < n && (s[i] < '5')) 
    { 
        if(s[i] == '4') 
            s[i] = '5'; 
        else 
            s[i]='3'; 
        ++i; 
        while(i<n) 
        { 
            s[i] = '3'; 
            ++i; 
        } 
    } 
    else 
    { 
        while(i >= 0 && (s[i] != '3')) 
         --i; 
        if(i < 0) 
            return string(n + 1, '3'); 
        s[i] = '5'; 
        ++i; 
        while(i < n) 
        { 
            s[i] = '3'; 
            ++i; 
        } 
    } 
    return s; 
} 
  
int main() 
{ 
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    int t;  
 cin >> t;  
 while(t--) 
    { 
     string s; 
     cin >> s; 
     cout << solve(s) << endl; 
    } 
}

//Never Forget to Star this Repo <3
