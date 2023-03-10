#include <stdio.h>
int main()
{
    char name[10],vd,surname[10];
    printf("Enter your name: ");
    scanf("%s",name);
    scanf("%s",surname);
    printf("\nHi! %s %s",name,surname);
    return 0;
}