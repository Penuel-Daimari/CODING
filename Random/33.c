#include<stdio.h>
int main()
{
    int n,max,min;
    char x,yn;
    int countp,countn,count0;
    countp=countn=count0=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0) countn++;
    else if (n>0) countp++;
    else if (n==0) count0++;
    max=n;min=n;
do
    {
        printf("\nEnter another number: ");
        scanf("%d",&n);
        if (n<0) countn++;
        if (n>0) countp++;
        if(n==0) count0++;
        if (n>max) max=n;
        if (n<max) min=n;
        printf("\nEnter more number(Y/N): ");
        scanf("%c",&x);
        scanf("%c",&yn);
    }
    while (yn=='Y');
    printf("\nYou have entered %d positive numbers, %d negative numbers and %d zeros\n",countp,countn,count0);
    printf("\nThe largest number is: %d, and the smallest number is: %d\n",max,min); 
return 0;
}