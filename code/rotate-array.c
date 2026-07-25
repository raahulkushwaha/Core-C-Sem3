#include <stdio.h>

void Rotate(int *a, int size, int k)
{
    k %= size;
    
    void Reverse(int left, int right)
    {
        int temp;

        while (left < right)
        {
            temp = a[left];
            a[left] = a[right];
            a[right] = temp;

            left++;
            right--;
        }
    }

    Reverse(0, size - 1);
    Reverse(0, k - 1);
    Reverse(k, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 2;

    int size = sizeof(arr) / sizeof(arr[0]);

    Rotate(arr, size, k);

    printf("Rotated array is:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}