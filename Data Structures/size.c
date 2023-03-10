#include<stdio.h>
int * size(int a[])
{
    return sizeof(*a);
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter elements-\n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n%lu\n",size(a));
    return 0;
}