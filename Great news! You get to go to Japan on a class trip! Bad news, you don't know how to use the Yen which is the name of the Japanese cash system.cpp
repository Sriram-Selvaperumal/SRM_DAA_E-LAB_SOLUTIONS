/* Problem Description:
Great news! You get to go to Japan on a class trip! Bad news, you don't know how to use the Yen which is the name of the Japanese cash system.
Japan uses coins for cash a lot more than the United States does. Yen comes in coins for values of: 1, 2, 10, 50, 100, & 500 To practice your Yen skills, you have selected random items from Amazon.co.jp and put them into
a list along with their prices in Yen. You now want to create a program to check your Yen math. */

//Solution:

#include<iostream> 
using namespace std; 
int main() 
{ 
int items; 
int a,j,cnt=0; 
cin>>a>>items; 
int c[items]; 
string s[items]; 
for(j=0;j<items;j++){ 
cin>>s[j]>>c[j]; 
if(c[j]<a){ 
cout<<"I can afford "<<s[j]<<endl; 
a=a-c[j]; 
} 
else{ 
cnt++; 
cout<<"I can't afford "<<s[j]<<endl; 
} 
//cout<<cnt; 
} 
if(cnt==items) 
cout<<"I need more Yen!"; 
else 
cout<<a; 
return 0; 
cout<<"for(i=1;i<=yen;i++) int i,j;"; 
}
// NEVER FORGET TO STAR THIS REPO
