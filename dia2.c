#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            printf(" ");
        }

        for (j = 0; j < 1 + i * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1 + i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 7 - i * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
