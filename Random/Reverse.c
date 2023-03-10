#include<stdio.h>
int main ()
{
    int x,x2,i,r;
    printf("Enter a Number to get it's reverse: ");
    scanf("%d",&x);
    r=0;x2=x;
    while(x>0)
    {
        i=x%10;
        r=r*10+i;
        x=x/10;
    }
    printf("\nThe reverse of %d is %d\n",x2,r);
    return 0;
}