#include<stdio.h>
int factorial(int);
int main()
{
    int n,N;
    float sum=0;
    printf("Enter value of n\n");
    scanf("%d",&N);
    printf("The value \n");
    for(n=1;n<=N;n++)
    {
        sum+= (float)n/factorial(n);
        if(n<N)
        printf("%d/%d!+ ",n,n);
        else 
        printf("%d/%d! = %f",n,n,sum);
    }
    if(N==0)
    printf("%d = %d\n",N,N);
}

int factorial(int N)
{    
    int n,f=1;
    for(n=1;n<=N;n++)
    {
        f=f*n;
    }
    return (f);   
}