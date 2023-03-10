#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *p;
    printf("Enter the size of arrray: ");
    scanf("%d",&n);
    p = (int *)malloc(10 * sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("\nValue for Index %d: ",i);
        scanf("%d",&p[i]);
    }
    putchar('\n');
    for(int i=0;i<n;i++)
    {
        printf("Value at index %d is: %d\n",i,p[i]);
    }

    printf("Enter the size of new array: ");
    scanf("%d",&n);
    p = (int *)realloc(p,n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("\nValue for Index %d: ",i);
        scanf("%d",&p[i]);
    }
    putchar('\n');
    for(int i=0;i<n;i++)
    {
        printf("Value at index %d is: %d\n",i,p[i]);
    }
    return 0;
}