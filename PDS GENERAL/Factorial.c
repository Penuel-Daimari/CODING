#include <stdio.h>
int main ()
{
    int a,n,factorial;
    n=1;
    factorial=1;
    printf("Enter a Number to get it's factorial : ");
    scanf("%d",&a);
    while(n<=a)
    {
        factorial= n*factorial;
        n=n+1;
    }
    printf("\nThe Factorial of %d is : %d", a,factorial);
    return 0;
}