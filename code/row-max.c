#include <stdio.h>
#include <limits.h>

void FindRowMaxAndMax(int size, int matrix[size][size])
{
    int max = INT_MIN;
    int maxRowIndex = 0;

    printf("\n--- Row-wise Max ---\n");
    for (int i = 0; i < size; i++)
    {
        int rowMax = INT_MIN;
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] > rowMax)
            {
                rowMax = matrix[i][j];
            }
        }

        printf("Row %d max = %d\n", i + 1, rowMax);

        if (rowMax > max)
        {
            max = rowMax;
            maxRowIndex = i + 1;
        }
    }

    printf("\nRow with Maximum Element: Row %d (Element = %d)\n", maxRowIndex, max);
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

    FindRowMaxAndMax(size, matrix);

    return 0;
}
