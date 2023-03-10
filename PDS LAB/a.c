#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100], b[100], c[100];
    strcpy(a,"1");
    strcpy(b,"0");
    int d = strcmp(a,b);
    printf("%d",d);
}