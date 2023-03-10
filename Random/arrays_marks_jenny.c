#include<stdio.h>
int main()
{
    int N;
    int i,sum;
    printf("How many subjects do you have?\n: ");
    scanf("%d",&N);
    int marks[N];
    printf("Enter marks for the subjects: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&marks[i]);
    }
    sum=0;
    for(i=0;i<N;i++)
    {
        sum+=marks[i];
    }
    printf("Your score in percentage is %.2f%%",(float)sum/(float)N);
    return 0;
}