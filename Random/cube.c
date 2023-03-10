#include<stdio.h>
int main ()
{
    int a,b,i,j;
    printf("Enter number of Rows and columns: ");
    scanf("%d%d",&i,&j);
    for(a=1;a<=i;a++)
    {
        {
            for (b=1;b<=j;b++)
            printf("* ");
        }
        printf("\n");
    } 
    return 0;
}