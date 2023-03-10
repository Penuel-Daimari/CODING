#include<stdio.h>
int main ()
{
    int a[10],i,j,k,n;
    n=7;
    printf("Enter 7 integers: ");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i]||a[i]<1||a[i]>7)
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                    a[n]=0;
                    n--;
                    j--;
                }
            }
        }
    }
    printf("Elements of a[]: ");
    for(i=0;i<7;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}