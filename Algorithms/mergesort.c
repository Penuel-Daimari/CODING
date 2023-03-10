#include<stdio.h>
#include<stdlib.h>
void printarray(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void merge(int a[],int b[],int c[],int m,int n)
{
   int i,j,k;
   i=j=k=0;
   while(i<m&&j<n)
   {
    if(a[i]<b[j]){c[k]=a[i];i++;}
    else{c[k]=b[j];j++;}
    k++;
   }
   while(i<m)
   {
    c[k]=a[i];
    i++;
    k++;
   }
   while(j<n)
   {
    c[k]=b[j];
    j++;
    k++;
   } 
}
void mergesort(int a[],int n)
{
    int l,h,i;
    l=(n+1)/2;
    h=n-l;
    int b[l];int c[h];
    for (i=0;i<l;i++){a[i]=b[i];}
    for(i=l;i<h;i++){a[i]=c[i];}
    mergesort(b,l);
    mergesort(c,h);

}
int main()
{
    int a[]={9, 14, 4, 8, 7, 5, 6};
    int n=sizeof(a)/sizeof(int);
    printarray(a,n);
    mergesort(a,n);
    printarray(a,n);
    return 0;
}