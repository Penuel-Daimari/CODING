#include<stdio.h>
#include<stdlib.h>
#define MAXLEN 100
typedef struct {
    char c;
    int back;
    int front;
}queue;
queue init(){
    queue Q;
    Q.front=0;
    Q.back=MAXLEN-1;
    return Q;
}
int main ()
{
    return 0;
}