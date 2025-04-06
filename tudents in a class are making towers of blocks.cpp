/* Students in a class are making towers of blocks. Each student makes a (non-zero) tower by stacking pieces lengthwise on top of each other.
The N of the students use pieces made of two blocks and m of the students use pieces made of three blocks.
The students don't want to use too many blocks, but they also want to be unique, so no two students' towers may contain
the same number of blocks.
Find the minimum height necessary for the tallest of the students' towers. */

//Solution:

#include<iostream>
using namespace std;
int n,m,x=1; 
int main() {
    cin>>n>>m;
    while(x/2<n||x/3<m||x/2+x/3-x/6<n+m) x++;
    cout<<x;
}
// NEVER FORGET TO STAR THIS REPO
