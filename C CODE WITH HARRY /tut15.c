#include <stdio.h>
int main ()
{
    int i,j;
    printf("Enter a Number: ");
    scanf("%d",&i);
    for (j=i;j<=100;)
    {
        printf("%d\n",j);
        j=j+2;
    }
    return 0;
}