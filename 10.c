#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        k = 0;
        for (j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                j >= 5 ? k-- : k++;
                printf("%d ", k);
            }
            else
            {
                j >= 5 ? k-- : k++;
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}