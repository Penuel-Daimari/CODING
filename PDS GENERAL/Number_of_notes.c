#include<stdio.h>
int main()
{
    int p;
    int a,b,c,d,e,f,g,h,i;
    printf("Enter the amount: ");
    scanf("%d",&p);
    a=p/500;
    p%=500;
    b=p/100;
    p%=100;
    c=p/50;
    p%=50;
    d=p/20;
    p%=20;
    e=p/10;
    p%=10;
    f=p/5;
    p%=5;
    g=p/2;
    p%=2;
    h=p/1;
    printf("\nTherea are");
    printf("\n%d Note(s) of 500.00",a);
    printf("\n%d Note(s) of 100.00",b);
    printf("\n%d Note(s) of 50.00",c);
    printf("\n%d Note(s) of 20.00",d);
    printf("\n%d Note(s) of 10.00",e);
    printf("\n%d Note(s) of 5.00",f);
    printf("\n%d Note(s) of 2.00",g);
    printf("\n%d Note(s) of 1.00",h);
    return 0;
}