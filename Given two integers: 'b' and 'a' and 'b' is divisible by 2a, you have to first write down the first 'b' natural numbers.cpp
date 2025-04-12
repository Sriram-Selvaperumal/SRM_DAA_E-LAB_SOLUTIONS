/* Problem Description:
Given two integers: 'b' and 'a' and 'b' is divisible by 2a, you have to first write down the first 'b' natural numbers in the following form:
1. At first take first 'a' integers and make their sign negative
2. Then take next 'a' integers and make their sign positive
3. The next 'a' integers should have negative signs and continue this procedure until all the 'b' integers have been assigned a sign.
For example, let 'b' be 12 and 'a' be 3. Then we have-1 - 2- 3 + 4+ 5+ 6-7- 8-9 + 10 + 11 + 12. If b = 4 and a = 1, then we have-1 +2 -3 + 4.
Now your task is to find the summation of the numbers considering their signs. */

//Solution:

#include <iostream> 
using namespace std; 
int main() 
{ 
    int t; 
    long long m; 
    long long n; 
    long long ans; 
    scanf("%d", &t); 
    for (int cs = 1; cs <= t; cs++) { 
        scanf("%lld %lld", &n, &m); 
        ans = (n * m ) / 2; 
        printf("%lld\n",ans); 
    } 
 
}

//NEVER FORGET TO GIVE STAR TO THIS REPO <3