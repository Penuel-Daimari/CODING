#include<stdio.h>
#include<stdlib.h>
typedef struct lklst{
    int data;
    struct lklst *link;
}lklst;

void count_of_nodes(struct lklst *head)
{
    int count=0;
    if(head==NULL)
        printf("Linked list is empty\n");
    struct lklst*ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("Nodes: %d\n",count);
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
    lklst *null=NULL;
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

    count_of_nodes(head);
    print_linked_list(head);
    return 0;
}