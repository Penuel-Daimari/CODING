#include<stdio.h>
#include<math.h>
int main()
{
    float CI,P,R,T;
    int N;
    printf("Enter Principal amount\n");
    scanf("%f",&P);
    printf("Enter rate in percentage\n");
    scanf("%f",&R);
    printf("Enter time in years(decimals)\n");
    scanf("%f",&T);
    printf("Enter number of times interest is getting compounded per year\n");
    scanf("%d",&N);
    CI=(float)(P*(pow((1+(R/(100*N))),(N*T))));
    printf("Compound Interest is %f\n",CI);
    return 0;
}