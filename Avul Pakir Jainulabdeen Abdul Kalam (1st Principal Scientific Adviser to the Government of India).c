/* Problem Description:
Avul Pakir Jainulabdeen Abdul Kalam (1st Principal Scientific Adviser to the Government of India). He passed away on 27 July 2015. May he rest in peace. This problem is dedicated to APJ Abdul Kalam. He will be in
our hearts, always.
Actor Vivek plan to build an Educational Trust for poor students. Initially the total number of student is 0 and in each time, two types of proposals will be there:
1. donate E (100 ≤ E ≤ 10^5), then you have to add E to the trust.
2. report, report all the student currently in the trust. */

//Solution :

#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    int i,n,l,sum,d; 
    char str[50]; 
    scanf("%d",&n); 
    for(i=0;i<n;i++) 
    { 
        sum=0; 
    scanf("%d",&l); 
    printf("Line %d:\n",i+1); 
    while(l--) 
    { 
      scanf("%s",str); 
      if(strcmp(str,"donate")==0) 
      { 
      scanf("%d",&d); 
      sum=sum+d; 
      } 
      else 
      { 
       printf("%d\n",sum); 
      } 
      } 
    } 
    return 0; 
}

//NEVER FORGET TO GIVE STAR TO THIS REPO