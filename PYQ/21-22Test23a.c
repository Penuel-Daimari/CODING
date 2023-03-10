#include<stdio.h>
struct student {
     int rank;
     struct student *ptr;
};
int main() 
{
    struct student A, B, C;
    A.rank = 1; B.rank = 5; C.rank = 10;
    A.ptr = &B; B.ptr = &C; C.ptr = &A;
    printf("%d,%d", ((B.ptr)->ptr)->rank,(B.ptr)->rank );
}