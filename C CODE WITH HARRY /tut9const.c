#include<stdio.h>
#define PI 3.14
//We can pre define constants using hashtag 
//lines with hashtags doesn't require semi colon
int main ()
{
    const int a = 3; 
    printf("The Value of PI is %.2f\n", PI);
    printf(" Vlue of Constant a is %d\n", a);
    // int a = 5; // This cannot be done because a is constant 
    printf("The Value of Constant a cannot be Changed so it will show error if changed %d", a);
    // The value of PI also cannot be changed 
    return 0;
}