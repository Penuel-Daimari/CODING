#include<stdio.h>
int main ()
{
    int a,b,c,f;
    printf("Enter three numbers to find their HCF: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c) f=a;
    else if (b>=a && b>=c) f=b;
    else f=c;
    while (f>=0)
    {
        if(a%f==0 && b%f==0&& c%f==0)
        {
            printf("The HCF is %d",f);
            break;
        }
        f--;
    }
    return 0;
}