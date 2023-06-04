#include <stdio.h>

int main(void)
{
    int count;
    int n;
    int sum;

    printf("Enter a number> ");
    scanf("%i", &n);

    count = 1;
    sum = 0;
    while (count <= n)
    {
        sum += count;
        count++;
    }
    if (sum == (n * (n + 1)) / 2)
        printf("The values are the same\n");
    else
        printf("The values are the same\n");
}