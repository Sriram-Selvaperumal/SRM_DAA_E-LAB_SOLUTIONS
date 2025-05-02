/* Question Description:
Vaanavan thinks that lucky tickets are the tickets whose numbers are divisible by 3. He gathered quite a large collection of such tickets but one day his younger brother Leonid was having a sulk and decided to destroy the
collection.
First, he tore every ticket exactly in two, but he didn't think it was enough and Leonid also threw part of the pieces away. Having seen this, Vaanavan got terrified but still tried to restore the collection.
He chose several piece pairs and glued each pair together so that each pair formed a lucky ticket.
The rest of the pieces Vaanavan threw away reluctantly.
Thus, after the glueing of the 2t pieces, he ended up with ttickets, each of which was lucky.
When Leonid tore the tickets in two pieces, one piece contained the first several letters of his number and the second piece contained the rest.
Vaanavan can glue every pair of pieces in any way he likes, but it is important that he gets a lucky ticket in the end.
For example, pieces 123 and 99 can be glued in two ways: 12399 and 99123.
What maximum number of tickets could Vaanavan get after that? */

//Solution:

#include<bits/stdc++.h> 
using namespace std; 
int a[3]; 
int main() 
{ 
    int n,x,i; 
    cin>>n; 
    for(i=1;i<=n;i++) 
    { 
        cin>>x; 
        a[x%3]++; 
    } 
    cout<<a[0]/2+min(a[1],a[2])<<endl; 
    return 0; 
}

