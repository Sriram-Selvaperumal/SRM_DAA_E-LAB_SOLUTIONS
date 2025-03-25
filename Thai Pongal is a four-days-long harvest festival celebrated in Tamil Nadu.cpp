/* Problem Description:
Thai Pongal is a four-days-long harvest festival celebrated in Tamil Nadu, a southern state of India. In that festival I have a party at the 1st day of Pongal Festival for the contestants. For this reason I have invited C contestants
and arranged P Pongal's ( Traditionally prepared on this day. The dish involves a new harvest of rice, milk and jaggery). Each contestant ate Q Pongal's and L Pongal's were left (L < Q).
Now you have to find the number of Pongal's each contestant ate. */

//Solution:

#include <iostream>
#include <cstdio>
using namespace std;

void factors(int num, int l, int line) {
    int count = 0;
    printf("Line %d:", line);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0 && i > l) {
            printf(" %d", i);
            count++;
        }
    }
    if (count == 0) {
        printf(" impossible");
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++) {
        int p, l;
        cin >> p >> l;
        int q = p - l;
        factors(q, l, j);
    }
    return 0;
    cout<<"continue;";
}
