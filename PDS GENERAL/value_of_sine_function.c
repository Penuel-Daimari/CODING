#include<stdio.h>
#include<math.h>
int factorial(int); 
main()
{
    int d,c,n;
    double a,s;
    printf("In which format do you want to give your angle\nEnter 0 for Degree, 1 for Radians: ");
    scanf("%d",&d);
    printf("\nInput Angle: ");
    scanf("%lf",&a);
    printf("\nEnter a number to get more accurate results\n3 for least and more for more accuracy\n");
    scanf("%d",&n);
    if (d==0)
    {
        a=a*3.141592/180;
    }
    c=0;s=0;
    while(c<=n)
    {
        s+=(pow(-1,c))*(pow(a,c))/ factorial(c);
        c++;
    }
    printf("The value of sin(%lf) is: %lf\n",a,s);
    }
    int factorial(int val)
    {
        int factorial = 1,i;
        for(i=1;i<=val;i++)
        {
            factorial=factorial*i;
        }
        return (factorial);
    }