/* Problem Descripton :
The Mask ate a block of dynamite to save Tina during Dorian's rampage - now he has a taste for it.
Help the Mask figure out how much dynamite he can eat without being destroyed. */

// Solution:

#include <bits/stdc++.h> 
using namespace std; 
int main() 
 { 
float a,c,d; 
string b; 
cin>>a>>b>>c; 
float res; 
int z=b.size(); 
if(z==1) 
d=b[0]-48; 
else 
d=(float)(b[0]-48)/(b[2]-48); 
res=a*d*0.45*7.5; 
if(res>c){ 
cout<<res<<" the Mask should not eat it!"; 
} 
else 
cout<<fixed<<setprecision(2)<<res<<" the Mask can eat it!"; 
return 0; 
cout<<"for"; 
}
// NEVER FORGET TO STAR THIS REPO
