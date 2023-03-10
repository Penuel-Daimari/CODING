#include<stdio.h>
int main ()
{
    int h,m,s;
    printf("Input Seconds: ");
    scanf("%d",&s);
    h=s/3600;
    s%=3600;
    m=s/60;
    m%=60;
    printf("\nThe time(H:M:S) is- %d:%d:%d\n",h,m,s);
    return 0;
}