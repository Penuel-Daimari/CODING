#include<stdio.h>
double * minimum(double *a)
{
    int i,j,n;
    double min;
    n=sizeof(a)/sizeof(double);
    min=a[0];
    double *p=&a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>min)
        {
            min=a[i];
            p=&a[i];
        }
    }
    return p;
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("");
    return 0;
}