#include<stdio.h>
int main()
{
    int N,N1,x,n;
    printf("Enter a number to check the number of digits in it\n");
    scanf("%d",&N);
    x=1;
    while(N>0)
    {
        N/=10;
        if (N>0)
        {
            x++;
        }
    }
    if(N1%10==0)
    {
        x++;
    }
    printf("\nYou have entered a %d digit number.\n",x);
    return 0;
}