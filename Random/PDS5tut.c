#include <stdio.h>
int main()
{
    int x[6], i, j, a, b, c;
    printf( "Enter 6 positive integers: ");
    for(i=0; i<6; i++)
    scanf("%d", &x[i]);
    printf("\nCoprimes: ");
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++)
        {
            a=x[i]; b=x[j];
            while(b!=0)
            {
                c=b;
                b=a%b;
                a=c;
            }
            if (a==1)
            {
                printf("(%d-%d)",x[i],x[j]);
            }
        }
    }
}