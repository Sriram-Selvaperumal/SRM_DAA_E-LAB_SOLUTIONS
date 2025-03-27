/* Question Description:
Lakshman and Sukran are the best competitive programmers in their town. However, they can't both qualify to an important contest. The selection will be made with the help of a single problem. Bhoominath, a friend of
Lakshman, managed to get hold of the problem before the contest. Because he wants to make sure Lakshman will be the one qualified, he tells Lakshman the following task.
You're given an (1-based) array a with n elements. Let's define function fi, i) (1 i, j≤n) as (i-j)2 + gli, j)2. Function g is calculated by the following pseudo-code: */

//Solution:

#include <bits/stdc++.h> 
using namespace std; 
long long n, i = 1, j, k = 9e9, x, s[100001], d; 
  
int main() { 
    cin>>n; 
    for (; i <= n; i++){ cin>>x;s[i] = s[i - 1] + x;} 
    for (i = 1; i <= n; i++) 
        for (j = max(1ll, i - 20000); j <= i; j++) 
            if (i != j) k = min(k, (i - j) * (i - j) + (s[i] - s[j]) * (s[i] - s[j])); 
    cout << k; 
}
