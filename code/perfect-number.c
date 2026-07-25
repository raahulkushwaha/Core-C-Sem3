#include <stdio.h>

int IsPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return sum == num;
}

int main()
{
    int num;
    printf("Enter a number:\t");
    scanf("%d", &num);

    if (IsPerfect(num))
    {
        printf("%d is Perfect Number\n", num);
    }
    else
    {
        printf("%d is not Perfect Number\n", num);
    }
}
