#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name,7,stdin);//will scan only upto 7-1 charecters(no buffer overflow)
    printf("\nName in four letter after six space:%10.4s\n",name);
    printf("Full name using puts function: ");puts(name);puts(name);puts(name);
    //puts always adds new line at the end 
    printf("Name starting from third letter is: %s\n",&name[2]);
    //printf("%s",name[2]); //error
    return 0;
}