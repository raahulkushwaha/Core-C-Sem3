#include <stdio.h>
#include <limits.h>

void FindRowSumsAndMax(int size, int matrix[size][size])
{
    int maxSum = INT_MIN;
    int maxRowIndex = 0;

    printf("\n--- Row-wise Sums ---\n");
    for (int i = 0; i < size; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < size; j++)
        {
            rowSum += matrix[i][j];
        }

        printf("Row %d sum = %d\n", i + 1, rowSum);

        if (rowSum > maxSum)
        {
            maxSum = rowSum;
            maxRowIndex = i + 1;
        }
    }

    printf("\nRow with Maximum Sum: Row %d (Sum = %d)\n", maxRowIndex, maxSum);
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

    FindRowSumsAndMax(size, matrix);

    return 0;
}
