#include<stdio.h>
int main ()
{
    int x,y;
    printf("Number of Rows: ");
    scanf("%d",&x);
    printf("\nNumber of Columns: ");
    scanf("%d",&y);
    int a[x][y];
    int i,j;
    printf("\nEnter the numbers for matrix of order %dx%d: \n",x,y);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}