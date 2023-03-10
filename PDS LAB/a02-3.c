#include<stdio.h>
#include<math.h>
int main()
{
  double x, y, z;
  int m=0; // total number of multiplications
  printf("Enter x: ");
  scanf("%lf", &x);
  printf("%0.9lf\n", x);
  y=x*x; m++;
  z=y*y; m++;
  printf("1+x(1+x(1+x(1+x(1+x(1+x)))))=%0.9lf\n", 1+(x+y)*(1+y+z));
  m++;
  printf("1-x(1-x(1-x(1-x(1-x(1-x)))))=%0.9lf\n", 1+(y-x)*(1+y+z));
  m++;
  printf("#multiplications = %d\n", m);
  return 0;
}
//Some Mathematical skills 