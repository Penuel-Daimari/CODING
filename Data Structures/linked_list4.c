//INCOMPLETE
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

int main()
{
    int n;
    lklst *head=NULL;
    printf("No. of items: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int data;
        scanf("%d",&data);
        add_at_end(head,data);
    }
    count_of_nodes(head);
    print_linked_list(head);
    return 0;
}