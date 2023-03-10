#include<stdio.h>
#include<stdlib.h>
typedef struct list{
    int data;
    struct list *link;
}list;

void print(list *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->link;
    }
    putchar('\n');
}

void remove_item(list **head,int n){
    list *current,*previous;
    current=*head;
    previous=*head;
    while(current!=NULL){
        if(current->data==n){
            current=current->link;
        }
    }
}

int main(){
    list *head=malloc(sizeof(list));
    head->data=50;
    head->link=NULL;

    list *current1=malloc(sizeof(list));
    current1->data=100;
    current1->link=NULL;
    head->link=current1;

    list *current2=malloc(sizeof(list));
    current2->data=45;
    current2->link=NULL;
    current1->link=current2;
    // remove_item(&head,100);
    print(head);
    return 0;
}