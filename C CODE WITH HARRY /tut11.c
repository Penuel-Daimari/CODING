#include <stdio.h>
int main ()
{
    int age, marks;
    printf("Enter YOur Age\n");
    scanf("%d", &age);
    switch (age)
    {
    case 3:
        printf("The Age is 3\nEnter Your Marks\n ");
        scanf("%d", &marks);
        switch (marks)
        {
            case 50: 
                printf("Your marks is 50\n");
            break;

            default:
                printf("Your Marks is not 50");
            break;
        }
        break;
    case 13:
        printf("The Age is 13\n");
        break;
    case 23:
        printf("The age is 23\n");
        break;
    default:
        printf("Age is not 3, 13 or 23");
        break;
    }
    return 0;
}