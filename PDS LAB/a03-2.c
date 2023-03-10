#include<stdio.h>

int main()
{
  int a, b, c, d, e, t;
  printf("Enter a, b, c, d, e: ");
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
  
  //sort a, b --> 1 comparison
  
  if(a>b){
    t=a;
    a=b;
    b=t;
  }
  
  //sort a, b, c --> 2 comparisons
  
  if(c<a){
    t=a;
    a=c;
    c=b;
    b=t;
  }
  else if(c<b){
    t=c;
    c=b;
    b=t;
  }

  //sort a, b, c, d --> 1 or 2 comparisons
  
  if(d<b)
  {
    if(a<d)
    {
      t=d;
      d=c;
      c=b;
      b=t;    
    }
    else
    {
      t=d;
      d=c;
      c=b;
      b=a;
      a=t;
    }  
  }  
  else
  {
    if(d<c)
    {
      t=d;
      d=c;
      c=t;    
    }
  }
  
  // Find median --> 1 or 2 comparisons
  
  if(e<b)
    t=b;
  else if(e>c)
    t=c;
  else
    t=e;
  
  // Total: 5 to 7 comparisons
  
  printf("Median = %d\n", t);
  return 0;  
}
//Median of 5 numbers