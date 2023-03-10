#include<stdio.h>
int main()
{
    float d,vs;
    printf("Input: ");
    scanf("%f",&d);
    vs=3.14*(d/2.0)*(d/2.0)*(d/2.0)*4.0/3.0;
    printf("Output: %.2f",vs*4.0);
    return 0;
}