#include<stdio.h>
#include<stdlib.h>
void merge(int*A,int*B,int*C,int m,int n)
{
    int i=0,j=0,k=0,p;
    do
    {
        if(A[i]<B[j]){C[k]=A[i];i++;}
        else{C[k]=B[j];j++;}
        k++;
    } while((i<m)&&(j<n));
    if(i==m){for(p=j;p<n;p++){C[k]=B[p];k++;}}
    else{for(p=i;p<m;p++){C[k]=A[p];p++;}}
}
void merge_sort(int *A,int n)
{
    int i,j,k,m;
    int *B, *C;
    if(n>1)
    {
        k=n/2;m=n-k;
        B=(int *)calloc(k,sizeof(int));
        C=(int *)calloc(m,sizeof(int));
        for(i=0;j<k;i++)B[i]=A[i];
        for(j=k;j<n;j++)C[j-k]=A[j];}
        merge_sort(B,k);
        merge_sort(C,m);
        merge(B,C,A,k,m);
        free(B);free(C);
    
}
int main()
{
    int n;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter the elements of A: ");
    int i;
    for(i=0;i<n;i++){scanf("%d",&A[i]);}
    merge_sort(A,n);
    printf("\nThe new sorted Array is: ");
    for(i=0;i<n;i++){printf("%d",A[i]);}
    printf("\n");
    return 0;
}