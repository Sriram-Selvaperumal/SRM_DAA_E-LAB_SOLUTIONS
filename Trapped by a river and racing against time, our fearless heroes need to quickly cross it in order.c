/* Problem Description:
Trapped by a river and racing against time, our fearless heroes need to quickly cross it in order to stop mom from placing the wrong pizza order. (Funny story, turns out Greg was only joking about the anchovies).
Luckily, our heroes have found a ramp on their side of the river (what could go wrong?). */

//Solution:

#include <stdio.h>
#include <math.h>

int main() 
{ float ramp1, rate1, time1, speed1, distance, wor; 
    char ch[20]; 
     scanf("%s", ch); scanf("%f", &ramp1); scanf("%f", &rate1); scanf("%f", &wor); 
    time1=sqrt(2.0*ramp1/rate1);  // Added missing '*' for multiplication
    speed1 = time1 * rate1;  // Added missing '*' for multiplication
    distance = speed1 * speed1 / 9.805;  // Corrected formula
    if (distance < (wor - 5)) 
    {    printf("%s will reach a speed of %0.2f m/s on a %0.0f ramp crossing %0.1f of %0.1f meters, SPLASH!\n", ch, speed1, ramp1, distance, wor); 
    } 
    else if (distance > (wor - 5) && distance < wor) 
    {   
        printf("%s will reach a speed of %0.2f m/s on a %0.0f ramp crossing %0.1f of %0.1f meters, BARELY MADE IT!\n", ch, speed1, ramp1, distance, wor);  
    } 
    else 
    {   
        printf("%s will reach a speed of %0.2f m/s on a %0.0f ramp crossing %0.1f of %0.1f meters, LIKE A BOSS!\n", ch, speed1, ramp1, distance, wor); 
    } 
    
    return 0; 
}
// NEVER FORGET TO STAR THIS REPO
