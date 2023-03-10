#include<stdio.h>
int binarysearch(int a[],int size,int key)
{
    int l,h,mid;
    l=0;h=size-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==key){return mid;}
        if(a[mid]<key){l=mid+1;mid=(l+h)/2;}
        else{h=mid-1;mid=(l+h)/2;}
    }
    return -1;
}
int main()
{
    int n;
    printf("Set the Array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of array in a sorted manner: ");
    int i;
    for(i=0;i<n;i++){scanf("%d",&arr[i]);}
    int key;
    printf("\nEnter the key to find it's index: ");
    scanf("%d",&key);
    int index = binarysearch(arr,n,key);
    if (index!=-1){printf("\nThe element %d was found at index %d\n",key,index);}
    else printf("\nThe element %d was not found in the array\n",key);
    return 0;
}
