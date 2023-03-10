#include <stdio.h>
int main ()
{
    int n,a, sum;
    a=0;sum=0;
    printf("Enter a number upto which you need sum of the natural numbers: ");
    scanf("%d",&n);
    while(a<=n)
    {
        sum = sum+a;
        a= a+1;
    }
    printf("\nThe sum of first %d natural numbers is: %d\n",n,sum);
    return 0;
}