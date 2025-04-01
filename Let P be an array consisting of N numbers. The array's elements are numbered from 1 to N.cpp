/* Question Description:
Let P be an array consisting of N numbers. The array's elements are numbered from 1 to N, even is an array consisting of the numerals whose numbers are even in P (even ;= P2i, 1≤2is n), odd is an array consisting of the
numerals whose numbers are odd in a (odd ;= P2i-1, 1≤2i-1 ≤ n). Then let's define the transformation of array F(P) in the following manner:
. if n> 1, FP) = Fodd) + Fleven), where operation " +" stands for the arrays' concatenation (joining together)
. if n=1, FP) = P
Let P be an array consisting of N numbers 1, 2, 3, ... , N. Then Q is the result of applying the transformation to the array P (so Q= FP)). You are given m queries (/, r, u, v). Your task is to find for each query the sum of
numbers Qj, such that / is rand us Q¡S v. You should print the query results modulo mod. */

//Solution:

#include <stdio.h> 
 
int md; 
 
int s(int n) { 
    return (n % 2 == 0 ? (n / 2 % md) * ((n + 1) % md) : (n % md) * ((n + 1) / 2 % md)) % md; 
} 
 
int sum, cnt; 
 
void queries(long long n, long long k, long long a) { 
    int sum0, cnt0, sum1, cnt1; 
 
    if (k <= 0 || a <= 0) 
        sum = cnt = 0; 
    else if (k >= n) { 
        if (a > n) 
            a = n; 
        sum = s(a), cnt = a % md; 
    } else { 
        queries((n + 1) / 2, k, (a + 1) / 2), sum0 = sum, cnt0 = cnt; 
        queries(n / 2, k - (n + 1) / 2, a / 2), sum1 = sum, cnt1 = cnt; 
        sum = ((long long) sum0 * 2 - cnt0 + md + sum1 * 2) % md; 
        cnt = (cnt0 + cnt1) % md; 
    } 
} 
 
int main() { 
    int n; 
    int m; 
 
    scanf("%d%d%d",&n,&m,&md); 
    while (m--) { 
        long long l, r, a, b; 
        int ans; 
 
        scanf("%lld%lld%lld%lld", &l, &r, &a, &b), l--, a--; 
        ans = 0; 
        queries(n, r, b), ans = (ans + sum) % md; 
queries(n, r, a), ans = (ans - sum + md) % md; 
queries(n, l, b), ans = (ans - sum + md) % md; 
queries(n, l, a), ans = (ans + sum) % md; 
printf("%d\n", ans); 
} 
return 0; 
}
// NEVER FORGET TO STAR THIS REPO
