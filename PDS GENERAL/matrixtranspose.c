#include<stdio.h>

void readm(int a[][100],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[][100],int b[][100],int m,int n)
{
    int t[m*n],i,j,x;
    x=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            t[x]=a[i][j];
            x++;
        }
    }
    x=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i]=t[x];
            x++;
        }
    }
}

void printm(int a[][100],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
    }
}

int main()
{
    int a[100][100],b[100][100],m,n;
    printf("Set the order of matrix: ");
    scanf("%d%d",&m,&n);
    printf("\nEnter the elements of matrix: \n");
    readm(a,m,n);
    transpose(a,b,m,n);
    printm(b,n,m);
    printf("\nThe order of the transpose of matrix is: %dx%d\n",n,m);
    return 0;
}