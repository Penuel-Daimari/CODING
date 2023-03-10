#include<stdio.h>
//Format Specifier
int main ()
{
    int a;
    float b;
    a = 8;
    b = 6.80978913;
    printf("The value of a is %d and the value of b is %.6f\n", a,b);
    //The number .6 means 6 decimal places 
    printf("The value of b is %7.3f\n",b);
    //The number 7.3 means print b with accuracy of 3 decimal places in the space of 7 charecters 
    printf("The value of b is %-12.3f Gaped",b);
    //When we write the number of space in negative then the spcae is counted from left to right 
    // *The space if only for the digits after decimal point
    return 0;
}