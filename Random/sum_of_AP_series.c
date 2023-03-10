#include<stdio.h>
int main ()
{
    int a,b,d,n,N,sum;
    printf("Enter firtst two terms for finding common Difference\n");
    scanf("%d%d",&a,&b);
    d=b-a;
    printf("\nEnter last term of series\n");
    scanf("%d",&N);
    sum=0;
    printf("\n");
    for(n=a;n<=N;n+=d)
    {
        sum+=n;
        if(n<N)
        {
            printf("%d+ ",n);
        }
        else
        {
            printf("%d = %d\n",n,sum);
        }
    }
    return 0;
}    