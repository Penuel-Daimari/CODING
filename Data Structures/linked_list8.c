#include<stdio.h>
#include<stdlib.h>

typedef struct list{
    int data;
    struct list *link;
}list;

void print_linked_list(list *head)
{
    list *ptr=head;
    if(ptr==NULL)
        printf("Linked list is empty");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    putchar('\n');
}

list *remove_from_end(list *head)
{
    list *temp=malloc(sizeof(list));
    temp=head;
    while(head->link!=NULL){
        temp->link=NULL;
    }
    temp=NULL;
    return head;
}
 
int main()
{
    list *head=malloc(sizeof(list));
    head->data=50;
    head->link=NULL;

    list *current=malloc(sizeof(list));
    current->data=45;
    current->link=NULL;
    head->link=current;

    print_linked_list(head);
    head=remove_from_end(head);
    print_linked_list(head);
    return 0;
}