#include<stdio.h>
#include<string.h>
int stringlength(char *name)
{
    int count=0;
    while(name[count]!='\0')
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    printf("Enter name: ");
    gets(name);
    printf("\nYour name is %lu letters long\n",strlen(name));
    printf("stringlenth using own function: %d\n",stringlength(name));
    return 0;
}