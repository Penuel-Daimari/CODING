#include<stdio.h>
#include<stdlib.h>
typedef struct lklst{
    int data;
    struct lklst *link;
}lklst;
int main()
{
    lklst *head=(lklst *)malloc(sizeof(lklst));
    head->data=45;
    head->link=NULL;

    lklst *current=(lklst *)malloc(sizeof(lklst));
    current->data=50;
    current->link=NULL;
    head->link=current;
    
    current=(lklst *)malloc(sizeof(lklst));
    current->data=40;
    current->link=NULL;
    head->link->link=current;

    printf("%d %d %d\n",head->data,head->link->data,head->link->link->data);
    return 0;
}