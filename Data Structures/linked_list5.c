#include<stdio.h>
#include<stdlib.h>
typedef struct list{
    char c;
    struct list *link;
}list;

list* string_to_list(char *string)
{
    list *head=NULL, *tail;
    int i;
    if(string[0]!='\0'){
        head=malloc(sizeof(list));
        head->c=string[0];
        tail=head;
        for(i=1;string[i]!='\0';i++)
        {
            tail->link=malloc(sizeof(list));
            tail=tail->link;
            tail->c=string[i];
        }
        tail->link=NULL;
    }
    return head;
}

void print_linked_list(list *head)
{
    list *ptr=head;
    if(ptr==NULL)
        printf("Linked list is empty");
    while(ptr!=NULL){
        printf("%c ",ptr->c);
        ptr=ptr->link;
    }
    putchar('\n');
}
int main()
{
    char string[10];
    list *linked_list;
    scanf("%s",string);
    list *head=NULL;
    linked_list=string_to_list(string);
    print_linked_list(linked_list);
    return 0;
}