#include<stdio.h>
void display(int n);
int main()
{
    int n;
    printf("Enter number n: ");
    scanf("%d",&n);
    display(n);
}
void display(n)
{
    if (n<1)
    {
        printf("%d ",n);
        return;
    }
    else 
    {
        printf("%d ",n);
        display(n-1);
        printf("%d ",n);
    }
}