#include<stdio.h>
#include<stdlib.h>
int isempty(int n){
    return(n==-1);
}
int main()
{
    int a=-1;
    int b=2;
    int n=isempty(a);
    int m=isempty(b);
    printf("%d  %d",n,m);
    return 0;
}
