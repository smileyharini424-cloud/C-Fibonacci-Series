#include <stdio.h>

int main()
{
    int n;
    int first = 0;
    int second = 1;
    int next;
    int i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("Fibonacci Series:\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
