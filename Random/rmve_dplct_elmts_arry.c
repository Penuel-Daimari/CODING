#include<stdio.h>
int main()
{
    int a[10];
    int i,j,k,n;
    n=10;
    printf("Enter ten elements of array: ");
    for(i=1;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\nThe non-repeated elements array is: ");
    for(i=1;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}