#include<stdio.h>
int fun(int n);
int main ()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d\n",fun(a));
    return 0;
}
int fun(int n)
{
    int sum,a;
    sum=0;
    if(n>0)
    {
        if(n%10<=7)
        sum=n%10+fun(n/10);
        else sum=fun(n/10);
        return sum;
    }
    else return 0;
}