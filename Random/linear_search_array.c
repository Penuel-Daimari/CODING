#include<stdio.h>
int main()
{
    int n,key,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the data: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key: ");
    scanf("%d",&key);
    printf("The index for your key is: ");
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("%d ",i);
        }
    }
    for (i=0;i<n;i++)
    {
        if(key==a[i])break;
    }
    if(i==n) printf("-1");
    return 0;
}