#include<stdio.h>
int main()
{
    int s,x,N;
    printf("Enter a number to chechk wether it is perfect or not: ");
    scanf("%d",&N);
    s=0;
    for(x=1;x<N;x++)
    {
        if(N%x==0)
        {
            s+=x;
        }
    }
    if (s==N)
    {
        printf("\n%d is a perfect number.\n",N);
    }
    else
    {
        printf("\n%d is not a perfect number.\n",N);
    }
    return 0;
}