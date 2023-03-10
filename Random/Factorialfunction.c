#include<stdio.h>
int fact (int);
int main ()
{
    int n,r;
    printf("Calculate Permutation and Combination\nEnter 'n' and 'r' : ");
    scanf("%d%d",&n,&r);
    printf("\nPermutation = %d", fact(n)/fact(n-r));
    printf("\nCombination = %d", fact(n)/fact(r)/fact(n-r));
    printf("\nFactorial n = %d", fact(n));
    return 0;
}
int fact(int x)
{
    int ans;
    if (x==1||x==0)
    {
        return 1;
    }
    else
    {
        return (x*fact(x-1));
    }    
}