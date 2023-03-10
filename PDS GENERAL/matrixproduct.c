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

void mproduct(int a[][100],int b[][100],int c[][100],int m,int n,int p,int q)
{
    int i,j,k,l;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
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
    int a[100][100],b[100][100],c[100][100],m,n,p,q;
    printf("Set the order of first matrix mxn: ");
    scanf("%d%d",&m,&n);
    printf("\nEnter the elements of first matrix: \n");
    readm(a,m,n);
    printf("\nSet the order of second matrix pxq(p=n): ");
    scanf("%d%d",&p,&q);
    printf("\nEnter the elements of second matrix: \n");
    readm(b,p,q);
    mproduct(a,b,c,m,n,p,q);
    printf("\nThe product of the two matrices is: \n");
    printm(c,m,q);
    printf("\nThe order of new matrix is %dx%d\n",m,q);
    return 0;
}