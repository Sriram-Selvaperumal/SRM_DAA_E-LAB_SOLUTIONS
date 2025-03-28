/* Question Description:
The spring is coming and it means that a lot of fruits appear on the counters. One sunny day young girl Valarmathi decided to go shopping.
She made a list of m fruits he wanted to buy. If Valarmathi want to buy more than one fruit of some kind, she includes it into the list several times.
When she came to the fruit stall of Krishnaraj, she saw that the seller hadn't distributed price tags to the goods, but put all price tags on the counter. Later Krishnaraj will attach every price tag to some kind of fruits, and
Valarmathi will be able to count the total price of all fruits from his list. But Valarmathi wants to know now what can be the smallest total price (in case of the most «lucky» for him distribution of price tags) and the largest total
price (in case of the most «unlucky» for him distribution of price tags). */

//Solution:

#include <bits/stdc++.h>
using namespace std;

map<string, int> p;
int n, m, g[102], c[102], cnt;
string s;

int main() {
    cin>>n>>m;
    for (int i = 0; i < n; i++)
        cin>>g[i];
    sort(g, g + n);

    for (int i = 0; i < m; i++) {
        cin>>s;
        if (!p[s])
            p[s] = ++cnt;
        c[p[s]]++;
    }
    sort(c + 1, c + cnt + 1);

    int num = 0;
    for (int i = 1; i <= cnt; i++)
        num += c[i] * g[cnt - i];
    cout << num << " ";

    num = 0;
    for (int i = 1; i <= cnt; i++)
        num += c[i] * g[n - cnt + i - 1];
    cout << num;

    return 0;
}
