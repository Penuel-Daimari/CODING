#include<stdio.h>
#include <stdlib.h> // for srand(), rand()

int main()
{
  long long int phno;
  int p1, p2, p3, p4, n1, n2, n3, n10, n12, n123;
  unsigned int seed;
  int m;
  
  printf("Enter a phone number: ");
  scanf("%lld", &phno);
  printf("Enter a seed: ");
  scanf("%d", &seed);
  srand(seed);
  m = rand()%3 + 3; 
  printf("Random number m = %d\n", m);
  n123=phno/10000000;
  n1=n123/100;
  switch(n1)
  {
    case 7:
    case 9:
      p1=(phno%10 + 5)%m + 2;
      p2=p1 + m%2;
      p3=(n1+2)%m;
      p4=p2%(m+1) + 1;
      break;
      
    case 6:
    case 8:
      n2=(n123/10)%10;
      p1=n2%m+1;
      p2=p1+1;
      p3=(phno%100)/10;   //n9
      p4=(n1+m)%3+2;
      break;
      
    default:
      p1=p4=(m + n123%10)%3+5;
      p2=p3=p1%m;
  }
  printf("OTP = %d%d%d%d\n", p1, p2, p3, p4);
  return 0;
}
//OTP Generator