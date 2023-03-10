#include<stdio.h>
int main ()
{
    int a;
    printf("Enter a number in the range '0' to '80': ");
    scanf("%d",&a);
    while (a<0 || a>80)
    {
        printf("\nEnter correct input: ");
        scanf("%d",&a);
    }
    printf("\nThank You for your response\n");    
    return 0;
}