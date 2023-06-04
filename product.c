#include <stdio.h>

int main(void)
{
    double product;
    double number;
    double count;

    product = 1;
    count = 0;

    while (product < 10000)
    {
        printf("Product so far: %8.3f\n", product);
        printf("Enter a number> ");
        scanf("%lf", &number);
        product *= number;
        count += 1;
    }
    printf("\nEnd of operation :)\n");
    return (0);
}