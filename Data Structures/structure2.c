//Array of Structure
#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int roll_no;
    int marks;
};
int main()
{
    struct student s[100];
    int i,n;
    char x;
    printf("Enter total number of students: ");
    scanf("%d",&n);
    scanf("%c",&x);
    for(i=0;i<n;i++)
    {
        printf("Enter info of student %d\n",i+1);
        printf("\nName: ");
        fgets(s[i].name,30,stdin);
        printf("\nRoll Number: ");
        scanf("%d",&s[i].roll_no);
        printf("\nMarks: ");
        scanf("%d",&s[i].marks);
        printf("\n");
        scanf("%c",&x);
    }
    int max,m;
    max=0;m=0;i=0;
    for(i=0;i<n;i++)
    {
        if(s[i].marks>max)
        {
            max=s[i].marks;
            m=i;
        }
    }
    printf("\n%d\n",m);
    printf("\n%sgot the highest marks\n",s[m].name);
    return 0;
}