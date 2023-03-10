#include<stdio.h>
int main ()
{
    int n, i, count=0;
    printf("Enter a number to check wether it is prime or not: "); 
    scanf("%d",&n);
    for(i=1;i<=n;i++) //counts the total number of factors by which the Number is divisible
    {
        if(n%i==0)
        count++;
    }
    if(count==2) //*If a number if prime it will be divisible by only two numbers the number itself and 1 so count=2
    {
        printf("\n%d is a prime number", n);
    }
    else 
    {
        printf("\n%d is not a prime number\nBecause it is also divisible by:\n",n);
        for (i=2;i<n;i++)
        {
            if(n%i==0)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}