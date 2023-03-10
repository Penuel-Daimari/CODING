#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  int a, b, c;
  double x1, y1, x2, y2, x, y, u, v;
  printf("Enter a, b, c: ");
  scanf("%d%d%d", &a, &b, &c);
  x2 = abs(a) + abs(b) + abs(c);
  x1 = -x2;
  y1 = c+x1*(b+x1*(a+x1));
  y2 = c+x2*(b+x2*(a+x2));
  printf("%16.9lf, %16.9lf       %16.9lf, %16.9lf\n", x1, y1, x2, y2);
  
  do{
    x=(x2*y1-x1*y2)/(y1-y2);
    y=c+x*(b+x*(a+x));

    if(y<0)
    {
      y1=y;
      x1=x;
      u=(x1+x2)/2;
      v=c+u*(b+u*(a+u));
      if(v>=0)
        x2=u, y2=v;
    }
    else
    {
      y2=y;
      x2=x;
      u=(x1+x2)/2;
      v=c+u*(b+u*(a+u));
      if(v<=0)
        x1=u, y1=v;
    }  
    printf("%16.9lf, %16.9lf       %16.9lf, %16.9lf\n", x1, y1, x2, y2);
  }while (fabs(y)>=0.0001);
  
  printf("Root = %16.9lf\n", x);
  printf("Function value = %16.9lf\n", y);
  return 0;
}
