#include<stdio.h>
int main ()
{
    int i;
    int a[5];
    printf("Enter the elements of array: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=4;i>=0;i--)
    {
        printf("\nArray element at index %d = %d\n",i,a[i]);
    }
}