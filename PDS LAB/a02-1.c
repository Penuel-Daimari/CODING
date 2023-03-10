#include<stdio.h>
int main()
{
  int a, b, c, f;
  printf("Enter a, b, c: ");
  scanf("%d%d%d", &a, &b, &c);
  f=a+b-c;
  printf("a+b-c=%d\n", f);
  printf("-a-b+c=%d\n", -f);
  printf("a/b + b/c + c/a=%0.6f\n", (float)a/(float)b + (float)b/(float)c + (float)c/(float)a);
  return 0;
}
//some Basic arithmetic operations 
