#include <stdio.h>
int main()
{
    int i, j;
    printf("\n\n");
    for (i = 1; i <= 13; i++)
    {
        if (i == 4)
            printf("******MySirG*******");
        for (j = 1; j <= 19; j++)
        {
            {
                if (i >= 5 && i <= 13 && j >= i - 3 && j <= 23 - i || i >= 1 && i <= 3 && (j >= 4 - i && j <= 6 + i || j >= 14 - i && j <= 16 + i))
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
