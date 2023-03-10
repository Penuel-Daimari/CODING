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

void msum(int a[][100],int b[][100],int c[][100],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
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
    int a[100][100],b[100][100],c[100][100],m,n;
    printf("Set the order mxn: ");
    scanf("%d%d",&m,&n);
    printf("\nEnter the elements of first matrix: \n");
    readm(a,m,n);
    printf("\nEnter the elements of second matrix: \n");
    readm(b,m,n);
    msum(a,b,c,m,n);
    printf("\nThe sum of the two matrices is: \n");
    printm(c,m,n);
    printf("\nCode Executed Successfully\n");
    return 0;
}