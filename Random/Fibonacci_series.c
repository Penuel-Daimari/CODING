#include<stdio.h>
int main()
{
    int x,a,b,c,n;
    printf("Set the number of therms of the Fibonacci series\n");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("\nThe series is\n%d",a);
    printf("\n%d\n",b);
    x=2;
    while (x<n)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        x++;
    }
    return 0;
}