#include<stdio.h>
int main ()
{
    double P,R,T,Interest,Amount;
    printf("Enter the Principal amount: ");
    scanf("%lf",&P);
    printf("\nEnter the Rate per annum(in percentage): ");
    scanf("%lf",&R);
    printf("\nEnter the Time Period(in years): ");
    scanf("%lf",&T);
    Interest=P*R*T/100;
    Amount=P+Interest;
    printf("\nThe interest is %lf and the total amount is %lf",Interest,Amount);
    return 0;
}