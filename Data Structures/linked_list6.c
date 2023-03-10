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

list * insert_at_beginning(list *head,int data)
{
    list *temp;
    temp=malloc(sizeof(list));
    temp->data=data;
    temp->link=head;
    head=temp;
    return head;
}

int main()
{
    list *head=malloc(sizeof(list));
    head->data=50;
    head->link=NULL;
    head=insert_at_beginning(head,100);
    print_linked_list(head);
    return 0;
}






