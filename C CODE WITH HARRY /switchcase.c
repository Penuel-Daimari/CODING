#include<stdio.h>
int main ()
{
    char letter;
    printf("Enter a letter");
    scanf("%c", &letter);
    if (letter>= 'a' && letter<= 'z')
    {
        letter = 'A' + (letter - 'a');
    }
    printf("The letter is %c", letter);
    return 0;
}
