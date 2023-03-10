//do while loop 
#include <stdio.h>
int main ()
{   
    int x;
    printf("Enter a Number\n");
    scanf("%d", &x);
    do
    {
        printf("X can be %d\n", x);
        x = x-1;
    }
    while (x>0);
    return 0;
}