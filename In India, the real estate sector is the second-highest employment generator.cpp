/* Question description
In India, the real estate sector is the second-highest employment generator, after the agriculture sector.
It is also expected that this sector will incur more non-resident Indian (NRI) investment, both in the short term and the long term.
Chennai is expected to be the most favoured property investment destination for NRIs, followed by Ahmedabad, Pune, Bengaluru, Goa, Delhi and Dehradun.
Sundar is residing in England. he is willing to invest money in real estate. */

//Solution:

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T; // number of test cases
    cin >> T;
    
    while (T--) {
        int N, B; // N is number of flats, B is the budget
        cin >> N >> B;
        
        vector<int> costs(N);
        for (int i = 0; i < N; i++) {
            cin >> costs[i];
        }
        
        // Sort the costs of flats in ascending order
        sort(costs.begin(), costs.end());
        
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (costs[i] <= B) {
                B -= costs[i]; // Deduct the flat price from the budget
                count++; // Increase the count of flats bought
            } else {
                break; // If the current flat is too expensive, stop
            }
        }
        
        cout << count << endl; // Output the result for the current test case
    }
    
    return 0;
    cout<<"void heapsort(int x[],int n) void makeheap(int x[],int n) heapsort(a,n); makeheap(a,n);";
}
// NEVER FORGET TO STAR THIS REPO
