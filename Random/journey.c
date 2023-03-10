#include <stdio.h>
void print_diamond(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j < 2 * i; j++)
        {
            if (j % 2 == 0)
                printf("  ");
            else if (i < 10)
                printf("%d ", i);
            else
                printf("%d", i);
        }
        putchar('\n');
    }

    for (i = n - 1; i >= 1; --i)
    {
        for (j = 0; j <= n - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j < 2 * i; j++)
        {
            if (j % 2 == 0)
                printf("  ");
            else if (i < 10)
                printf("%d ", i);
            else
                printf("%d", i);
        }
        putchar('\n');
    }
}
int main()
{
    int a, b, i, j, n;
    printf("Enter n: ");
    scanf("%d", &n);
    print_diamond(n);
    return 0;
}
