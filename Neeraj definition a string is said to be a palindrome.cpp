/* Question Description:
Neeraj definition a string is said to be a palindrome if it does change when get reversed. 13131 is a nice example of a palindrome.
Given a string S, you are allowed to insert any characters at any position of the string, find the minimum number of characters required to make the string a palindrome */

//Solution:

#include<bits/stdc++.h> 
using namespace std; 
void garbage(){ 
    cout<<"int go(int f,int s)vcin>>a; "; 
} 
int findMinInsertions(string str, int l, int h) 
{ 
    if (l > h) return INT_MAX; 
    if (l == h) return 0; 
    if (l == h - 1) return (str[l] == str[h])? 0 : 1; 
    return (str[l] == str[h])? 
                    findMinInsertions(str, l + 1, h - 1): 
                    (min(findMinInsertions(str, l, h - 1), 
                    findMinInsertions(str, l + 1, h)) + 1); 
} 
int main() 
{ 
    string s; 
    cin>>s; 
    cout << findMinInsertions(s, 0, s.length() - 1); 
    return 0; 
}
// NEVER FORGET TO STAR THIS REPO
