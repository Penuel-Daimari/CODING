#include<stdio.h>
int GCD (int,int);
int main ()
{
    int n,i,j;
    int a[6];
    printf("Input six positive integers: ");
    for(n=0;n<6;n++)
    {
        scanf("%d",&a[n]);
    }
    printf("\nGCD of 3 and 6 is %d",GCD(3,6));
    printf("\nCoprime pairs in this array are: \n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6&&j!=i;j++)
        {
            if (GCD(a[i],a[j])==1)
            {
                printf("(%d,%d)\n",a[i],a[j]);
            }
            if (i==j) continue;
        }
    }
}
int GCD(a,b)
{
    int count,i;
    count=0;
    if(b>a) 
    {
       i=a;
       a=b;
       b=i; 
    }
    for(i=b;i>0&&(a%i!=0||b%i!=0);i--)
    {
        if (a%i==0&&b%i==0)
        {
            count++;
        }
    }
    return i;
}