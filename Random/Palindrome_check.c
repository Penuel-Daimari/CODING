#include<stdio.h>
int main ()
{
    int x,x2,i,r;
    printf("Enter a Number to Check if it's palindrome or not: ");
    scanf("%d",&x);
    r=0;x2=x;
    while(x>0)
    {
        i=x%10;
        r=r*10+i;
        x=x/10;
    }
    if (x2==r)
        printf("\n%d is a palindrome.\n",x2);
    else printf("\n%d is not a palindrome.\n",x2);    
    return 0;
}