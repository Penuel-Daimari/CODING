#include<stdio.h>
#include<math.h>
int main()
{
    int N,N1,n;
    printf("Enter a number to know if it is Angstrom or not: ");
    int x,s;
    scanf("%d",&N);
    N1=N;
    n=1;
    while(N>0)
    {
        N/=10;
        if (N>0)
        {
            n++;
        }
    }
    N=N1;
    if(N%10==0)
    {
        n++;
    }
    s=0;
    while(N>0)
    {
        x=N%10;
        s+=pow(x,n);
        N/=10;
    }
    if (s==N1)
    {
        printf("\n%d is an Angstrom number\n",N1);
    }
    else
    {
        printf("\n%d is not an angstrom number\n",N1);
    }
    return 0;
}