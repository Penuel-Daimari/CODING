#include<stdio.h>
int main()
{
    int n,N;
    float i,s;
    printf("Enter a value of n\n");
    scanf("%d",&N);
    s=1;
    printf("The value of\n");
    printf("1/1");
    for(n=2;n<=N;n++)
    {
        printf("+ 1/%d",n);
        i=1/(float)n;
        s+=i;
    }
    printf(" = %f",s);
    return 0;
}