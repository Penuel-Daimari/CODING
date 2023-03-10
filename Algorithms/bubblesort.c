#include<stdio.h>
void printarray(int a[],int size)
{
    int x;
    for(x=0;x<size;x++)
    {
        printf("%d ",a[x]);
    }
    printf("\n");
}
void bubblesort(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)//number of passes
    {
        for(j=0;j<n-1-i;j++)//number of comparisons or swaps
        {
            if(a[j]>a[j+1]) 
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        printarray(a,6);
        
    }
}
int main()
{
    int a[]={12,54,65,7,23,9};
    printarray(a,sizeof(a)/sizeof(int));
    bubblesort(a,sizeof(a)/sizeof(int));
    printarray(a,sizeof(a)/sizeof(int));
    return 0;
}