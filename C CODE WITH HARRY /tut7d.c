#include <stdio.h>
int main ()
//assignment operators
{
    int a,b,c;
    a=100;
    b=50;
    c=25;
    printf("a = %d b = %d c = %d\n", a,b,c);
    //now lets assign new values using other assignment operators 
    c+=25; //Adds right operand to the left operand and assigns the new value to the left operand
    a/=c;  //Divides left operand by the right operand and assigns the value to left operand 
    b*=a;  //Works in a similar way as above
    printf("a = %d b = %d c = %d\n", a,b,c);
    return 0;
}