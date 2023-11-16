#include <stdio.h>

int main(void)
{
    int n, i, j, space;

    printf("다이아몬드의 크기를 입력하세요 (홀수): ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("홀수를 입력해주세요.\n");
        return 0;
    }

    // 위쪽 부분
    for (i = 0; i < n / 2 + 1; i++)
    {
        for (space = 0; space < n / 2 - i; space++)
            printf(" ");

        for (j = 0; j < 2 * i + 1; j++)
            printf("*");

        printf("\n");
    }

    // 아래쪽 부분
    for (i = n / 2 - 1; i >= 0; i--)
    {
        for (space = 0; space < n / 2 - i; space++)
            printf(" ");

        for (j = 0; j < 2 * i + 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
