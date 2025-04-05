/* Problem Description:
There is a Gangaroo initially placed at the origin of the coordinate plane. In exactly 1 second, the gangaroo can either move up 1 unit,move right 1 unit, or stay still. In other words, from position (a, b), the gangaroo can
spend 1 second to move to: */

// Solution :

#include <stdio.h> 
int main(){ 
    int x,y,s,t,i,j,count=0; 
    scanf("%d", &x); 
    scanf("%d", &y);  
    scanf("%d", &s);  
    scanf("%d", &t); 
    for(i=x;i<=x+s;i++){ 
        for(j=y;j<=y+s;j++){ 
            if(i+j<=t) 
            count++; 
        } 
    } 
    printf("%d",count); 
    return 0; 
    printf("if(s>=t)if(s<=t/2)"); 
}
// NEVER FORGET TO STAR THIS REPO
