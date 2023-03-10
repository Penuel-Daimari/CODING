#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXLEN 100
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
    if(isFull(S)){
        printf("push: Full Stack");
        return S;
    }
    S.top++;
    S.element[S.top]=ch;
    return S;
}

stack pop(stack S){
    if(isEmpty(S)){
        printf("pop: Empty Stack");
        return S;
    }
    --S.top;
    return S;
}

void print(stack S){
    int i;
    for(i=S.top;i>=0;--i)
        printf("%c ",S.element[i]);
}

int main()
{
    printf("Hello World\n");
    char string[100];
    printf("Enter string to test if it is parenthesized properly.\n->:");
    scanf("%s",string);
    stack S=init();
    int i=0;
    char a,x,b;
    while(string[i]!='\0'){
        a=string[i];
        if(a=='('||a=='{'||a=='[')
            push(S,a);
        if(a==')'||a=='}'||a==']'){
            if(isEmpty(S)){
                printf("Not well performed");
                break; 
            }
            x=top(S);
            S=pop(S);
            b=0;
            if(x=='(')
                if(a==')')b=1;
            if(x=='{')
                if(a=='}')b=1;
            if(x=='[')
                if(a==']')b=1;
            if(b==0){
                printf("Not Well Performed");
                break;
            }
        }
        i++;
    }
    if(!isEmpty(S))
                printf("Not well performed");
    else printf("Well performed");
    return 0;
}