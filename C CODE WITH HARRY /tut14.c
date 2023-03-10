#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a );
    while (a<50)
    {
    a = a+1;
    printf("%d\n", a);
    }
    return 0;
}