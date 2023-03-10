#include<stdio.h>
#define N 10
int main()
{
    int i,odd,even;
    even = odd = 0;
    int num[N];
    printf("Enter data: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0;i<N;i++)
    {
        switch (num[i]%2)
        {
            case 0: even++; break;
            case 1: odd++; break;
        }
    }
    printf("\nThere are %d even numbers and %d odd numbners.\n",even,odd);
    return 0;
}