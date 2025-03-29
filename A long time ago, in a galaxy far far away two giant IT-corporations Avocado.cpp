/* Question Description:
A long time ago, in a galaxy far far away two giant IT-corporations Avocado and Bobol continue their fierce competition. Crucial moment is just around the corner: Bobol is ready to release it's new tablet Lastus 3000.
This new device is equipped with specially designed artificial intelligence (Al). Employees of Avocado did their best to postpone the release of Lastus 3000 as long as possible. Finally, they found out, that the name of the
new artificial intelligence is similar to the name of the phone, that Avocado released 200 years ago.
As all rights on its name belong to Avocado, they stand on changing the name of Bobol's artificial intelligence.
Pineapple insists, that the name of their phone occurs in the name of Al as a substring. Because the name of technology was already printed on all devices, the Bobol's director decided to replace some characters in Al name
with "#". As this operation is pretty expensive, you should find the minimum number of characters to replace with "#", such that the name of Al doesn't contain the name of the phone as a substring.
Substring is a continuous subsequence of a string. */

//Solution:

#include <bits/stdc++.h>
using namespace std;

int a, i;
int main() {
    string s, t;
    cin >> s >> t;
    for (i = s.find(t); i + 1; ++a, i = s.find(t, i + t.size()));
    cout << a;
    return 0;
    cout<<"std::cin>>s>>t;";
}
