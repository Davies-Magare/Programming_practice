#include <stdio.h>

int main(void)
{
    int i;
    long long product;
    int n;

    printf("Enter a number to find the factorial> ");
    scanf("%i", &n);

    product = 1;
    for (i = n; i > 1; --i)
    {
        product = product * i;

    }
    printf("\nThe factorial of %i is %lli\n", n, product);
}