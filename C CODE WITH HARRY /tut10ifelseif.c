#include<stdio.h>
//Use of if else if statement
int main()
{
    int x;
    printf("Enter Your Age\n");
    scanf("%d", &x);
    if(x<1)
    {
        printf("You have entered an invalid age \nPlease Enter Valid age no");
    }
    else if (1<=x && x<3)
    {
        printf("You have entered your age %d\n",x);
        printf("You are just a baby\n");
    }
    else if (3<=x && x<7)
    {
        printf("You have entered your age %d\n",x);
        printf("You are a small Child\n");
    }
    else if (7<=x && x<13)
    {
        printf("You have entered your age %d\n",x);
        printf("You are still a child\n");
    }
    else if (13<=x && x<20)
    {
        printf("You have entered your age %d\n",x);
        printf("You are a teenager \nYou are now eligible for the course\n");
    }
    else if (20<=x && x<24)
    {
        printf("You have entered your age %d\n",x);
        printf("You are at the last stages to get enrolled into the course\n");
    }
    else
    {
        printf("You have entered your age %d\n",x);
        printf("Sorry you are no more eligible for this course you have crossed your age limit\n");
    }
    return 0; 
}