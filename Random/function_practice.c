#include<stdio.h>
int sum (int ,int );
int multiply (int, int);
char Caps (char);
int sums (int, int, int, int, int, int, int, int, int, int );
int main()
{
    int a,b;
    int c,d,e,f,g,h,i,j;
    char letter;
    printf("Enter a letter to get its capital form: ");
    scanf("%c",&letter);
    printf("\nThe capital form is: %c", Caps (letter));
    printf("\nEnter two numbers to get their sum and product: ");
    scanf("%d%d",&a,&b);
    printf("\nsum = %d", sum(a,b));
    printf("\nproduct = %d", multiply(a,b));
    printf("\nEnter eight more numbers to get the sum of ten numbers: ");
    scanf("%d%d%d%d%d%d%d%d",&c,&d,&e,&f,&g,&h,&i,&j);
    printf("\nTotal sum = %d", sums(a,b,c,d,e,f,g,h,i,j));
}
int sum (int a, int b)
{
    int s;
    s = a+b;
    return (s);
}
int multiply (int a, int b)
{
    int m;
    m=a*b;
    return (m);
}
char Caps (char letter)
{
    char CL;
    CL = letter-'a'+'A';
    return (CL);
}
int sums (int a, int b, int c, int d, int e, int f, int g, int h, int i, int j)
{
    int ans;
    ans = a+b+c+d+e+f+g+h+i+j;
    return (ans);
}