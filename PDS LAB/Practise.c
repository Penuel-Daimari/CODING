#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int dist(int a[],int k,int n,int m)
{
    int num,i;
    num=0;
    if(n==1)
    {
        a[k]=m;
        for(i=0;i<k;i++)
            printf("%d",a[i]);
        printf("\n");
        return 1;
    }
}

int main ()
{
    int a[100],n,m,num;
    printf("Enter number of children and number of tofes: ");
    scanf("%d%d",&n,&m);
    num=dist(a,0,n,m);
    printf("\nNumber of distributions is %d\n",num);
    return 0;
}
