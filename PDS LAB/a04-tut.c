#include<stdio.h>
#include<stdlib.h> // for fabs
#include<math.h>   // for log, sin 

#define PI (2.0*asin(1.0)) // asin means sine inverse

int main(){
  double x1, y1, x2, y2, x, y;
  
  x1 = PI/2.0, x2 = PI;
  y1 = log(x1) - sin(x1); // y1 < 0
  y2 = log(x2) - sin(x2); // y2 > 0
  
  printf("%12.9lf, %12.9lf       %12.9lf, %12.9lf\n", x1, y1, x2, y2);
  
  do{
    x = 0.5*(x1+x2);
    y = log(x) - sin(x);

    if(y<0)
      y1=y, x1=x;
    else
      y2=y, x2=x;
    
    printf("%12.9lf, %12.9lf       %12.9lf, %12.9lf\n", x1, y1, x2, y2);
  }while (fabs(y)>=0.0001);
  
  printf("Root = %12.9lf\n", x);
  printf("Function value = %12.9lf\n", y);
  return 0;
}