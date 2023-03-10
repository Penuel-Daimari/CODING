#include<stdio.h>
#include<string.h>
void ucase(char *a)
{
    int i,l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        a[i]=a[i]+'A'-'a';
    }
}
void lcase(char *a)
{
    int i,l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        a[i]=a[i]+'a'-'A';
    }
}
int main ()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s",name);
    ucase(name);
    printf("\nYour name in upper case is: %s\n",name);
    lcase(name);
    printf("Your name in lower case is: %s\n",name);
    return 0;
}