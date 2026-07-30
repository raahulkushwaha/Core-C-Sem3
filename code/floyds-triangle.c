#include <stdio.h>

int main()
{
    int row;
    int dot = 1;

    printf("Enter the number of rows:\n");
    scanf("%d", &row);

    printf("\n");
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            printf("%d\t", dot);
            dot++;
        }
        printf("\n");
    }

    return 0;
}