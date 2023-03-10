#include<stdio.h>
#include<stdlib.h>
typedef struct lklst{
    int data;
    struct lklst *link;
}lklst;

void add_at_end(lklst *head,int data)
{
    lklst *ptr, *temp;
    ptr=head;
    temp=malloc(sizeof(lklst));
    temp->data=data;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}

void print_linked_list(lklst *head)
{
    lklst *ptr=head;
    if(ptr==NULL)
        printf("Linked list is empty");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    putchar('\n');
}

int main()
{
    lklst *head, *current;
    head=NULL;
    head=malloc(sizeof(lklst));
    head->data=45;
    head->link=NULL;

    current=malloc(sizeof(lklst));
    current->data=50;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(lklst));
    current->data=40;
    current->link=NULL;
    head->link->link=current;

    add_at_end(head,65);
    print_linked_list(head);
    return 0;
}