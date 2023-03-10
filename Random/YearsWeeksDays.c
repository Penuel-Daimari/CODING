#include<stdio.h>
int main ()
{
    int n,y,w,d;
    printf("Number of days: ");
    scanf("%d",&n);
    y=n/365;
    printf("\nYears: %d",y);
    y=n%365; w=y/7;
    printf("\nMonths: %d",w);
    d=y%7;
    printf("\nDays: %d\n",d);
    return 0;
}