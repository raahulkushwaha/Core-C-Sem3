#include <stdio.h>

int main()
{
    int row;

    printf("Enter the number of row:\n");
    scanf("%d", &row);

    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d\t", j + 1);
        }
        printf("\n");
    }

    return 0;
}