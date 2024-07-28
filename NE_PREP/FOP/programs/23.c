#include <stdio.h>
int main()
{
    int arr[10][10] = {};
    int i, j;
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if (i >= j)
            {
                if ((i == j) || (j == 0))
                {
                    arr[i][j] = 1;
                }
                else
                {
                    arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
                }
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
