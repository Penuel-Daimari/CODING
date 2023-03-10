#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI (2.0*asin(1.0));  
int main ()
{
    char m;
    double x,ar;
    printf("How do you want to find the are of Circle\nUsing Radius(R) or Diameter(D)\n");
    scanf("%c",&m);
    if (m!='R'&&m!='r'&&m!='D'&&m!='d')
    {
        do
        {
            printf("\nEnter 'R' for Radius or 'D' for Diameter\n");
            scanf("%c",&m);
        }
        while (m!='R'&&m!='r'&&m!='D'&&m!='d');
    }
    switch(m)
    {
        case 'R':
        case 'r':
                {
                    printf("\nEnter the Radius of the circle: ");
                    scanf("%lf",&x);
                    ar= (x*x)*PI;
                    printf("\nArea = %lf",ar);
                    break;
                }
        case 'D':
        case 'd':
                {
                    printf("\nEnter the Diameter of the circle: ");
                    scanf("%lf",&x);
                    ar= ((x*x)/4)*PI;
                    printf("Area = %lf",ar);
                    break;
                }
    }                    
    return 0;
}