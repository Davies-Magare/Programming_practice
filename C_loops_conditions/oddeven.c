#include <stdio.h>
#define DEBUG 1
void count_odd_even(int number, int *odd, int *even);
int main(void)
{
    int odd, even;
    int number;

    printf("Enter your number> ");
    scanf("%i", &number);
    odd = even = 0;
    count_odd_even(number, &odd, &even);
    printf("Number: %i\nEven: %i\nOdd: %i\n", number, even, odd);
}
void count_odd_even(int number, int *odd, int *even)
{
    int digit;
    while (number != 0)
    {
        digit = number % 10;
        if (DEBUG)
            printf("digit: %i\n", digit);
        if (digit % 2 == 0)
            *even += 1;
        else
            *odd += 1;
        number /= 10;
    }
}