#include<stdio.h>
int main()
{
    char id[10];
    int wh, aph; 
    double salary;
    printf("Input the Employee's ID(Max. 10 Chars): ");
    scanf("%s",&id);
    printf("\nInput the working hours: ");
    scanf("%d",&wh);
    printf("\nSalary per hour: ");
    scanf("%d",&aph);
    salary=(double)wh*aph;
    printf("\nEmployee's ID: %s",id);
    printf("\nSalary = U$ %.2lf",salary);
    return 0;
}