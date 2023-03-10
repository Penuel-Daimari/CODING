#include<stdio.h>
char * display()
{
    return "Penuel";
}
int main()
{
    char * str;
    str=display();
    printf("String is: %s\n",str);
    return 0;
}