#include<stdio.h>
#include<string.h>
void stringreverse(char a[])
{
    int l=strlen(a);
    int i;
    char t;
    for(i=0;i<l/2;i++)
    {
        t=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=t;
    }
}
int main ()
{
    char s[20];
    printf("Enter string: ");
    gets(s);
    stringreverse(s);
    printf("\nReversed string is: %s\n",s);
    return 0;
}