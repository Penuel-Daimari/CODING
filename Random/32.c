#include<stdio.h>
int main()
{
    int i,j,n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n,j=0;i>1;i--,j++)
    {
        for(s=1;s<i;s++)
        {
            printf(" ");
        }
        printf("%d",j+1);
        for(s=2*j-1;s>0;s--)
        {
            printf(" ");
        }
        if((j+1)!=1) printf("%d\n",j+1);
        if((j+1)==1) printf("\n");
    }
    for(i=1;i<=n;i++) printf("%d",i);
    for(i=n-1;i>0;i--) printf("%d",i);
    printf("\n");
    for(i=1,j=n-2;i<n;i++,j--)
    {
        for(s=0;s<i;s++)
        {
            printf(" ");
        }
        printf("%d",n-i);
        for(s=2*j-1;s>0;s--)
        {
            printf(" ");
        }
        if(n-i!=1) printf("%d\n",n-i);
        if(n-i==1) printf("\n");
    }
    return 0;
}