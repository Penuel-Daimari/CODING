#include<stdio.h>
#include<math.h>
int main()
{
  int x1, y1, x2, y2, x3, y3;
  float a, l12, l23, l31;
  printf("Enter x and y coordinates of vertex 1: ");
  scanf("%d%d", &x1, &y1);
  printf("Enter x and y coordinates of vertex 2: ");
  scanf("%d%d", &x2, &y2);
  printf("Enter x and y coordinates of vertex 3: ");
  scanf("%d%d", &x3, &y3);
  l12=(float)((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  l23=(float)((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
  l31=(float)((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  printf("perimeter: %0.3f\n", sqrt(l12)+sqrt(l23)+sqrt(l31));
  a=(float)(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));  
  printf("Area: %0.3f\n",fabs(a/2));
  return 0;
}
// Area and Perimeter of a triangle with cooordinates of vetices given
 