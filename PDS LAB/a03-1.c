#include<stdio.h>
#include<math.h>
int main()
{
  float a, b, c, p, q, A, B, C, r;
  printf("Enter a, b, c: ");
  scanf("%f%f%f", &a, &b, &c);
  r=b*b-4*a*c;
  if(r>=0)
  {
    p=(-b+sqrt(r))/(2*a);
    q=(-b-sqrt(r))/(2*a);
    printf("Roots = ");
    if(p>0)
      printf("%f, -%f, ", sqrt(p), sqrt(p));
    if(p<0)
      printf("%fi, -%fi, ", sqrt(-p), sqrt(-p));
    if(p==0)
      printf("0, 0, ");
    if(q>0)
      printf("%f, -%f", sqrt(q), sqrt(q));
    if(q<0)
      printf("%fi, -%fi", sqrt(-q), sqrt(-q));
    if(q==0)
      printf("0, 0");
    printf("\n");
  }
  else
  {
    p=-b/(2*a);
    q=sqrt(-r)/(2*a);
    C=sqrt(p*p+q*q);
    A=sqrt((C+p)/2);
    B=sqrt((C-p)/2);
    printf("Roots = %f+%fi, -%f+%fi, %f-%fi, -%f-%fi\n", A, B, A, B, A, B, A, B);    
  }
}
//Roots of a double square function