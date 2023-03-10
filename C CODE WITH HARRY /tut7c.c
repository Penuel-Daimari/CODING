#include <stdio.h>
int main ()
//Logical operators
{
    int a,b,c,d ;
    a=0; 
    b=34;
    c=34;
    d=7;
    //and operator gives true value i.e. 1 only if both the conditions are true otherwise false 
    //for example here b is true(declaration that b is integer) but a is not true(declaration that b is not true)  
    printf("a && b %d\n", a&&b);//0 is not considered as true integer value 
    printf("b && c %d\n", b&&c);
    printf("d || c %d\n", d||c);//this is or operator which gives true value if any one of the conditions is true 
    printf("! d && c %d\n", !d&&c);//this is not operator which gives the opposite result(true if false and false if true)
    return 0;
}