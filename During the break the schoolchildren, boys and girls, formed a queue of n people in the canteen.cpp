//Question Description:

/* During the break the schoolchildren, boys and girls, formed a queue of n people in the canteen. Initially the children stood in the order they entered the canteen. However, after a while the boys started feeling awkward for standing in front of the girls in the queue and they started letting the girls move forward each second.
Let's describe the process more precisely. Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, at that the person in the position number 1 is served first. Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position, then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy. The time is given in seconds.
You've got the initial position of the children, at the initial moment of time. Determine the way the queue is going to look after t seconds. */

//Solution:

#include<iostream>
int main() {
    int n, t;
    std::cin >> n >> t;
    std::string s;
    std::cin >> s;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                std::swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    std::cout << s;
    return 0;
    std::cout << "int i,k,n; while(k){ char a[n+3];";
}
