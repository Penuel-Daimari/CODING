#include<stdio.h>
struct
{
    char name[30];
    int roll_no;
    int marks;
}s1={"Abhisek",1,26},s2={"Ayush",2,23};
int main()
{
    int a;
    printf("Roll no of %s is %d and his/her marks is %d\n",s1.name,s1.roll_no,s1.marks);
    printf("Roll no of %s is %d and his/her marks is %d\n",s2.name,s2.roll_no,s2.marks);
    s2=s1;
    printf("Roll no of %s is %d and his/her marks is %d\n",s2.name,s2.roll_no,s2.marks);
    return 0;
}