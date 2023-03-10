#include<stdio.h>
#include<math.h>
int main ()
{
    int n, i=2, flag=0;
    double limit ;
    printf("Enter a number to check wether it is prime or not: ");
    scanf("%d",&n);
    limit = sqrt(n);
    while(i<=limit)
    {
        if(n%i==0)
        {
            flag=1;break;
        }
        i=i+1;
    }
    if (flag==0) printf("\n%d is a prime number\n",n);
    else printf("\n%d is not a prime number\n",n);
    return 0;
}   