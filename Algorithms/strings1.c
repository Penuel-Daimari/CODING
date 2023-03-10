#include<stdio.h>
int main()
{
    char a[]= "animesh";
    char b[]={'p','e','n','u','e','l','\0'};
    char c[]={'w','e',' ','r','o','c','k','\0'};
    char d[]= "we rock";
    // char e[10];
    // e[10]="daimari"; separation of declaration and initialization is not allowed 
    printf("%s\n",a);
    printf("%s\n",b);
    printf("%s\n",c);
    printf("%s\n",d);
    // printf("%s\n",e);
    return 0;   
}