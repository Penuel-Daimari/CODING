#include<stdio.h>
int find_power(int n);
int main()
{
    int i,j,N;
    printf("Set the array size: ");
    scanf("%d",&N);
    int a[N];
    printf("Enter the data: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nYour array: ");
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}