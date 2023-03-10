#include<stdio.h>
// when dist is called:
// numbers of the first k children are already decided and present in the first k cells of A.
// n more children and m more toffees are left
// enumerates distributions of ALL children (including the first k) and returns number of distributions.

int dist(int A[], int k, int n, int m)
{
   int num, i;
   num=0;
   if(n==1)
   {
     A[k]=m;
     for(i=0; i<=k; i++)
       printf("%d ", A[i]);
     printf("\n");
     return 1;
   }
   for(i=1; i<=m-n+1; i++)
   {
     A[k]=i;
     num+=dist(A, k+1, n-1, m-i);   
   }
   return num;
}


int main()
{
  int A[100], n, m, num;
  printf("Enter number of children and number of toffees: ");
  scanf("%d%d", &n, &m);
  num = dist(A, 0, n, m);
  printf("Number of distributions is %d\n", num);
  return 0;
}
