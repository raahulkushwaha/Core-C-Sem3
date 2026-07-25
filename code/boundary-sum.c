#include <stdio.h>

int BoundarySum(int size, int matrix[size][size])
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || j == 0 || i == size - 1 || j == size - 1)
            {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

int main()
{
    int size;
    printf("Enter size of matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = BoundarySum(size, matrix);

    printf("Sum of boundary: %d\n", sum);

    return 0;
}
