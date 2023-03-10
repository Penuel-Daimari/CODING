#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
};
int main ()
{
    int n,i;
    char x;
    printf("No of students: ");
    scanf("%d",&n);
    struct student a[100];
    for(i=0;i<n;i++)
    {
        printf("Student %d- \n",i+1);
        scanf("%d",&a[i].roll);
        scanf("%c",&x);
        gets(a[i].name);
        scanf("%f",&a[i].marks);
    }
    struct student *p=&a[2];
    printf("Name of student 3 is: %s",(p->name));
    return 0;
}