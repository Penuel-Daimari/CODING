#include<stdio.h>
int main()
{
    char name1[25],name2[25],name[5];
    printf("Enter Name1: ");

    scanf("%s",name1);//cannot scan white space 
    printf("\nThe first name of name1 is: %s\n",name1);
    // will terminate with null cahracter on first white space

    printf("Enter Name2: ");
    gets(name2);//can scan white spaces also
    //but comes with buffer overflow problem(scanf also has this problem)
    printf("\nThe full name2 is: %s\n",name2);

    printf("Enter name: ");
    scanf("%4s",name);
    printf("\nYour name in first four letters is: %s\n",&name);

    return 0;
}