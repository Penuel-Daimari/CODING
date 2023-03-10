#include<stdio.h>
int main ()
{
    int n,x,s,N;
    printf("Enter a number to know all the perfect numbers upto: ");
    scanf("%d",&N);
    printf("\nThe perfect numbers between 1 and %d are:\n",N);
    for(n=1;n<=N;n++)
    {
        s=0;
        for(x=1;x<n;x++)
        {
            if(n%x==0) s+=x;
        }
        if(s==n)
        {
            printf("%d\n",n);
        }
    }
    return 0;
}