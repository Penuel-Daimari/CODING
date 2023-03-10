#include<stdio.h>
int main ()
{
    char First, Second, Third;
    First='X';
    Second='M';
    Third='L';
    printf("The reverse of %c%c%c is %c%c%c",First,Second,Third,Third,Second,First);
    return 0;
}