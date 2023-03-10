#include<stdio.h>
int main()
{
    int A,B,C,HCF;
    printf("Enter Two numbers you want to find HCF of:");
    scanf("%d %d",&A,&B);
    if (A<=B) 
        {C=A;}
    else {C=B;}
    if (A%C==0 &&B%C==0)
    {
        HCF=C;
    }
    else
    {
    while(A%C!=0 || B%C!=0)
    {
        C=C-1;
        HCF=C;
    }
    }
    printf("\nThe HCF of %d and %d is : %d\n",A,B,HCF);
    return 0; 
}