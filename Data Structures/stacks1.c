#include<stdio.h>
#include<stdlib.h>
#define MAXLEN 100;
typedef struct {
    char element[MAXLEN];
    int top;
}stack;

stack init(){
    stack S;
    S.top=-1;
    return S;
}

int isEmpty (stack S){
    return(S.top==-1);
}

int isFull(stack S){
    return(S.top==MAXLEN-1);
}

char top(stack S){
    if(isEmpty(S)){
        printf("top: Empty Stack");
        return '\0';
    }
    return S.element[S.top];
}

stack push(stack S,char ch){
    if(isFull){
        printf("push: Full Stack");
        return S;
    }
    S.top++
    S.element[S.top]=ch;
    return S;
}

stack pop(stack S){
    if(isEmpty){
        printf("pop: Empty Stack");
        return S;
    }
    --S.top;
    return S;
}

void print(stack S){
    for(int i=S.top;i>=0;--i);
        printf("%c ",S.element[i]);
}

int main()
{
    stack S;
    return 0;
}