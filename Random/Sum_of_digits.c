#include<stdio.h>
int main()
{
    int N,x,sum;
    printf("Enter a Number to get the sum of it's digits:");
    scanf("%d",&N);
    sum=0;
    while(N>0)
    {
        x=N%10;
        sum=sum+x;
        N=N/10;
    }
    printf("The required sum is %d",sum);
    return 0;
}