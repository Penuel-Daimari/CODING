#include<stdio.h>
#include<math.h>
int main()
{
  int x1, x2, y1, y2, x3, y3;
  float A=0.0;
  char c;
  printf("Enter x and y coordinates: ");
  scanf("%d%d", &x1, &y1);
  printf("Enter x and y coordinates: ");
  scanf("%d%d", &x2, &y2);
  while(1)
  {
    printf("Enter x and y coordinates: ");
    scanf(" %d%d",&x3, &y3);
    A+=0.5*fabs((float)(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
    printf("Enter more vertices (y/n)? ");
    scanf(" %c", &c);
    if(c=='n')
      break;
    x2=x3;
    y2=y3;
  }
  printf("Area = %.3f\n", A);
  return 0;
}
