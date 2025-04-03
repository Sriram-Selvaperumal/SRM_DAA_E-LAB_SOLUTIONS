/* Problem Description:
Seetha recently graduated from University. To celebrate, she went to a McDonald's and bought all the burgers. The total amount was a number upto which there are 'n' prime numbers (starting from 2).
Since Seetha wants to minimize her amount, she calls you to help her find the minimum cost that needs to be paid. Being a student of Seetha it is now your job to help her out :) */

//Solution:

#include <bits/stdc++.h> 
using namespace std; 
#define MAX_SIZE 1000005 
void SieveOfEratosthenes(vector<int>& primes){ 
    bool IsPrime[MAX_SIZE]; 
    memset(IsPrime, true, sizeof(IsPrime)); 
    for (int p = 2; p * p < MAX_SIZE; p++) { 
        if (IsPrime[p] == true) { 
            for (int i = p * p; i < MAX_SIZE; i += p) 
                IsPrime[i] = false; 
        } 
    } 
 
    for (int p = 2; p < MAX_SIZE; p++) 
        if (IsPrime[p]) 
            primes.push_back(p); 
} 
int main(){ 
    vector<int> primes; 
    SieveOfEratosthenes(primes); 
    int t; 
    cin>>t; 
    while(t--){ 
        int n; 
        cin>>n; 
        cout<<primes[n-1]<<endl; 
} 
return 0; 
}
// NEVER FORGET TO STAR THIS REPO
