#include<stdio.h>
int main ()
{
    int l,n,i,count,u;
    printf("Set the Upper limit\n");
    scanf("%d",&u);
    printf("Set the lower limit\n");
    scanf("%d",&l);
    printf("\nThe prime numbers between %d and %d are:\n",l,u);
    for(n=l;n<=u;n++)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            count++;
        }
        if (count==2)
        {
            printf("%d\n",n);
        }
    }
    return 0;
}