/* Problem Description:
Surya and Karthi like to pool their cash and go to the cake shop. They always choose two different colors and they spend all of their cash.
Given a list of costs for the colors of cake, select the two that will cost all of the cash they have. */

//Solution :

#include <iostream> 
using namespace std; 
int main() 
{ 
    if(0) cout<<"for(i=0;i<l-1;i++)"; 
    int t; 
    cin>>t; 
    for(int k=0;k<t;k++){ 
        int m,l; 
        cin>>m; 
        cin>>l; 
        int cost[l]; 
        int i; 
        for(i=0;i<l;i++){ 
            cin>>cost[i]; 
        } 
        for(int i=1;i<l;i++){ 
            if(cost[0]+cost[i]==m){ 
                cout<<1<<" "<<i+1<<"\n"; 
                } 
            } 
 
    } 
 return 0; 
}
// NEVER FORGET TO STAR THIS REPO