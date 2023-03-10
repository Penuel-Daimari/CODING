#include <stdio.h>
int main ()
{
    char letter, caps;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    caps = 'A' + (letter - 'a');
    printf("\nThe Capital form of %c is: %c", letter, caps);
    return 0;
}