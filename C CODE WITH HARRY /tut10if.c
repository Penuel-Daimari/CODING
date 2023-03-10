 #include<stdio.h>

int main()
{
    int a,b;
    if (3<5)
    {
    printf("True\n");
    };
    printf("Enter first Integer Number\n");
    scanf("%d",&a);
    printf("Enter second Integer Number\n");
    scanf("%d",&b);
    if(a>b)
    {
        printf("First Number is greater than Second Number");
    }
    else 
    {
        printf("Second Number is greater than First Number");
    }
    return 0; 
}