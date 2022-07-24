#include <stdio.h>
int main()
{
    int i, j, x = 0;
    for (i = 1; i <= 9; i++)
    {
        i < 6 ? x++ : x--;
        for (j = 1; j <= 9; j++)
        {
            if (i >= 1 && i <= 5 && j >= 6 - i && j <= 4 + i || i >= 6 && i <= 9 && j >= i - 4 && j <= x + 4)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
