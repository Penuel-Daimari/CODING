#include<stdio.h>
int factorial(int n);
int main ()
{
    int n,r;
    printf("Enter the values of n and r to compute nCr: ");
    scanf("%d%d",&n,&r);
    printf("\nnPr = %d\n",factorial(n)/factorial(n-r));
}
int factorial(int n)
{
    int i, fact;
    for(i=1;i<=n;i++) fact=fact*i;
    return (fact);
}