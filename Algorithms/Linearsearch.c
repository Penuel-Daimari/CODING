#include<stdio.h>
int linearsearch(int a[],int size,int key)
{
    int i,pos;
    for(i=0;i<size;i++)
    {
        if (a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main ()
{
    int arr[]={18,54,34,22,93,25,49,36,56,34,43,65,34,81,32,37,59};
    int size = sizeof(arr);
    int key=51;//Input for key 
    int index=linearsearch(arr,size,key);
    if (index!=-1){printf("The element %d was found at index %d\n",key,index);}
    else printf("The element %d was not found in the array\n",key);
    return 0;
}