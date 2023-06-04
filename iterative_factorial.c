#include <stdio.h>

int main(void)
{
    int n, p, temp;
    printf("Enter a number to find factorial> ");
    scanf("%i", &n);
    temp = n;
    p = 1;
    while (n > 0)
    {
        p = p * n;
        n -= 1;
    }
    printf("\nThe factorial of %i is %i\n", temp, p);
}