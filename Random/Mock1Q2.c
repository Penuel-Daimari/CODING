#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b2,x,i;
    printf("Enter a number in base 10: ");
    scanf("%d",&n);
    b2=0;
    for(i=n,x=0;i>=1;i=i/2,x++)
    {
        a=i%2;
        b2+=a*pow(10,x);
    }
    printf("\nThe binary form of the number %d is %d\n",n,b2);
    return 0;
}