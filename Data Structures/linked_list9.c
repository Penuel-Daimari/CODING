#include<stdio.h>
#include<stdlib.h>
 
typedef struct list{
    int data;
    struct list *link;
}list;

void print_linked_list(list *head)
{
    if(head!=NULL){
        list *temp=malloc(sizeof(list));
        temp=head;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->link;
        }
        putchar('\n');
    }
    else printf("The list is empty\n");
}

void remove_from_beginning(list **head){
    list *temp=*head;
    temp=temp->link;
    *head=NULL;
    *head=temp;
}

int main()
{
    list *head=malloc(sizeof(list));
    head->data=50;
    head->link=NULL; 

    list *current=malloc(sizeof(list));
    current->data=100;
    current->link=NULL;
    head->link=current;

    print_linked_list(head);
    remove_from_beginning(&head);
    print_linked_list(head);
    return 0;
}

