#include<stdio.h>
#include<string.h>
void strngcpy(char *b,char *a)
{
    int i,l;
    l=strlen(a);
    for(i=0;i<l-1;i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
}
struct student 
    {
        char name[30];
        int roll_no;
        int marks;
        char grade;
    };
int main()
{
    struct student a1,a2,a3;
    char x;
    printf("Enter the data(name, roll number, marks)for student1: ");
    fgets(a1.name,30,stdin);
    scanf("%d",&a1.roll_no);
    scanf("%d",&a1.marks);
    
    scanf("%c",&x);

    printf("\nEnter the data(name, roll number, marks)for student2: ");
    fgets(a2.name,30,stdin);
    scanf("%d",&a2.roll_no);
    scanf("%d",&a2.marks);
    
    scanf("%c",&x);

    printf("\nEnter the data(name, roll number, marks)for student3: ");
    fgets(a3.name,30,stdin);
    scanf("%d",&a3.roll_no);
    scanf("%d",&a3.marks);

    char topper[30];
    if(a1.marks>a2.marks&&a1.marks>a3.marks)
    strngcpy(topper,a1.name);
    if(a2.marks>a1.marks&&a2.marks>a3.marks)
    strngcpy(topper,a2.name);
    if(a3.marks>a1.marks&&a3.marks>a2.marks)
    strngcpy(topper,a3.name);
    printf("\n%s got the highest marks\n",topper);
    return 0;
}