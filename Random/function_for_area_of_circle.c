#include<stdio.h>
#include<math.h>
float area(float);
int main ()
{
    float r;
    printf("Enter radius of the circle: ");
    scanf("%f",&r);
    printf("Area of Circle = %0.4f",area(r));
}
float area (float n)
{
    return(n = 2.0*asin(1)*n*n);
}