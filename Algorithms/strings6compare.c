#include<stdio.h>
#include<string.h>
void stringcompare(char *a, char *b)
{
    int n=0,i;
    for(i=0;a[i]!='\0'||b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            n=a[i]-b[i];
            break;
        }
    }
    if(n==0){printf("Same: %d\n",n);}
    else printf("Not same: %d\n",n);
}
int main()
{
    char s1[10],s2[10];
    printf("Enter string1: ");
    gets(s1);
    printf("\nEnter string2: ");
    gets(s2);

    int a = strcmp(s1,s2);
    printf("\n%d\n",a);
    if(a==0){printf("The two strings are same\n");}
    else printf("The two strings are not same\n");
    
    stringcompare(s1,s2);//string compare using own function
    return 0;
}