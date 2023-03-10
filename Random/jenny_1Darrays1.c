#include<stdio.h>
#define N 5
int main ()
{
    int i;
    int a[N];
    printf("Enter the elements of array");
    for (i=0;i<N;i++)
    {
        printf("\nIndex [%d]: ",i);
        scanf("%d",&a[i]);
    } 
    printf("\n%d\n",a[4]);   
    return 0;
}