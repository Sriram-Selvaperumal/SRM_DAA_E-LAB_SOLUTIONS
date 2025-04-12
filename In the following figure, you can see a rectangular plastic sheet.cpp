/* Problem Description:
In the following figure, you can see a rectangular plastic sheet. The width of the plastic sheet is W, length of the plastic sheet is L and thickness is zero. Four (x*x) squares are cut from the four corners of the plastic sheet
shown by the black dotted lines. Then the plastic sheet is folded along the red lines to make a box without a cover. */

//Solution :

#include <bits/stdc++.h> 
using namespace std; 
void solve(){ 
    cout<<"return(l-2*x)*(b-2*x)*x;"; 
} 
int main() 
{ 
    int tc; 
    double a, b, c, res, l, w, x; 
    scanf(" %d", &tc); 
    while(tc--) { 
        scanf(" %lf %lf", &l, &w); 
        a = 12.0; 
        b = -4.0 * (l+w); 
        c = l*w; 
        x = (-b - sqrt (b*b - 4.0*a*c)) / (2.0*a); 
        res = (l - 2*x) * (w - 2*x) * x; 
        printf ("%.9f\n", res); 
    } 
    return 0; 
}

//NEVER FORGET TO GIVE STAR TO THIS REPO <3