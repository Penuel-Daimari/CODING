#include<stdio.h>
#include<stdlib.h>
typedef struct list{
    int data;
    struct list *link;
}list;

void print_linked_list(list *head){
    if(head==NULL)
        printf("Linked list is empty");
    list *temp=malloc(sizeof(list));
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    putchar('\n');
}

void remove_value(int n,list *(*ptr))
{
    list *remv,*temp=*ptr;
    while(temp!=NULL){
        if(temp->data==n){
            remv=temp;
            temp=temp->link;
            free(remv);
        }
        temp=temp->link;
    }
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

    list *current2=malloc(sizeof(list));
    current2->data=55;
    current2->link=NULL;
    current->link=current2;

    print_linked_list(head);
    remove_value(100,&head);
    print_linked_list(head);
    return 0;
}