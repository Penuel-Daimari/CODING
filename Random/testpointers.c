#include<stdio.h>
void pointer(int *p)
{
    *p=30;
}
void nonp(int a)
{
    a=30;
}
int main ()
{ 
    printf("with pointer             without pointer\n");
    int a;                              int b;
    a=10;                               b=10;
    printf("    %d                       %d\n",a,b);
    pointer(&a);                            nonp(b);
    printf("    %d                       %d\n",a,b);
    return 0;
}