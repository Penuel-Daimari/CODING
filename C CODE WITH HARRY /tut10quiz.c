#include<stdio.h>
int main()
{
    char a ;
    char b ;
    
    priintf("Have you passed Maths (Answer in yes or no)\n");
    printf("Only Capital Letters Allowed\n");
    scanf("%s",&a);
    printf("Have you passed Science (Answer in yes or no)\n");
    scanf("%s",&b);
    if(a == "YES" &&  b == "YES")
    {
        printf("Congratulation you have won cash prize worth Rs.45");
    }
    else if (a == "YES" || b == "YES")
    {
        printf("Congratulation you have won cash prize worth Rs.15");
    }
    else 
    {
        printf("Better Luck Next Time!");
    }
    a = 'Yes';
    printf("%c",a );
    return 0; 
}