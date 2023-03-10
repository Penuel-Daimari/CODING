#include <stdio.h>
int main ()
//arithmetic operators
{
    int a,b ;
    printf("Lets Learn Some Basic Arithmetic Operations\n");
    
    printf("Enter a number\n");
    //to take input from user the following code line 
    scanf("%d", &a);

    printf("Enter another number\n");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a,b,a+b); 
// for printing variables %d is kind of a variable which represents the location for the
// variable to be printed and its value is assigned later after commas 
    printf("%d - %d = %d\n", a,b,a-b); 
// for printing multiple variables just write %d where you want to print variables 
// then the assign the values accordingly separated by comma 
    printf("%d * %d = %d\n", a,b,a*b);

    printf("%d / %d = %d\n", a,b,a/b);

    return 0;
}