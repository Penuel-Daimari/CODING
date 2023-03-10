#include<stdio.h>
void selectionsort(int a[],int size)
{
    int i,j,t;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main()
{
    int A[]={23,56,5345,233,-34,43,-53,22,1,-5,434,32,0,-10,32,87,97,61};
    int size = sizeof(A)/sizeof(int);
    int i;
    printf("Number of elements in Array: %d\n",size);
    printf("Unsorted array: A = {");
    for(i=0;i<size-1;i++)printf("%d,",A[i]);
    printf("%d}\n",A[size-1]);
    selectionsort(A,size);
    printf("Sorted Array is: A = {");
    for(i=0;i<size-1;i++)printf("%d,",A[i]);
    printf("%d}\n",A[size-1]);
    return 0;
}