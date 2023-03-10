#include <stdio.h>
int main () 
{
    char s[10], *p[10], *temp ;
    int i;
    scanf("%s",s); printf("%s\n",s);
    for (i=0; i<10; i++) p[i] = s+i;
    printf ("p[0] = %s, p[1] = %s\n", p[0], p[1]) ;
    temp = p[0]; p[0] = p[2]; p[1] = temp;
    printf ("p[0] = %s, p[1] = %s\n", p[0], p[1]) ;
    *p[4] = 'r';
    *p[5] = '\0';
    printf ("s = %s, p[0] = %s\n", s, p[0]) ;
    return 0;
}