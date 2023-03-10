#include<stdio.h>
#include<string.h>
int main ()
{
    char a[10];
    printf("Enter name: ");
    scanf("%[^\n]",a);
    printf("\nThe name is: %s\n",a);
    return 0;
}