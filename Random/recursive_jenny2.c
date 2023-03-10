#include<stdio.h>
int sum(int);
int main ()
{
    int x;
    printf("Enter number n to get the sum of first 'n' positive integers: ");
    scanf("%d",&x);
    printf("\nSum = %d\n",sum(x));
}
int sum(x)
{
    int s=0;
    if (x==1)
    {
        return 1;
    }
    else 
    {
        s=x+sum(x-1);
        return s;
    }  
}