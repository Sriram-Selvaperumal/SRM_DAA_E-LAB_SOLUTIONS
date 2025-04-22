//Question Description:

/* Bragadesh got a job as a system administrator in X corporation. 
His first task was to connect n servers with the help of m two-way direct connection so that it becomes possible to transmit
data from one server to any other server via these connections. 
Each direct connection has to link two different servers, each pair of servers should have at most one direct connection. Y
corporation, a business rival of X corporation, made Bragadesh an offer that he couldn't refuse: Bragadesh was asked to
connect the servers in such a way, that when server with index v fails, the transmission of data between some other two
servers becomes impossible, i.e. the system stops being connected. 
Help Bragadesh connect the servers. */

//Solution:

#include<bits/stdc++.h>
using namespace std;

int n, m, v, u;

int main() {
    cin >> n >> m >> v;

    if (m < n - 1 || m > (n - 1) * (n - 2) / 2 + 1)
        return printf("-1"), 0;

    for (int i = 1; i <= n; ++i)
        if (i != v)
            printf("%d %d\n", i, v), u = i;

    m -= n - 1;

    if (m)
        for (int i = 1; i <= n; ++i)
            for (int j = i + 1; j <= n; ++j)
                if (i != v && j != u && i != u && j != v) {
                    printf("%d %d\n", i, j);
                    m--;
                    if (!m) return 0;
                }
}
