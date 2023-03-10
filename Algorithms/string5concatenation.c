//Concatenation
#include<stdio.h>
#include<string.h>
void stringcat(char *a, char *b)
{
    int l1=strlen(a);
    int l2=strlen(b);
    int i;
    for(i=0;i<=l2;i++)
    {
        a[i+l1]=b[i];
    }
}
int main()
{
    char name1[20],name2[20];
    printf("Enter first name: ");
    gets(name1);
    printf("\nEnter last name: ");
    gets(name2);

    // strcat(name1,name2);//(destination,source)
    // printf("\nFull name is: %s\n",name1);//buffer overflow is free

    stringcat(name1,name2);
    printf("\nFull name using own function: %s\n",name1);
    return 0;
}