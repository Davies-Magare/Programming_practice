#include <stdio.h>
#define DEBUG 0
#define SWITCH 0
int main(void)
{
    int number, digit, 
    divisor, sum,
    temp;

    while (SWITCH)
    {
        printf("Enter your number> ");
        scanf("%i", &number);
        temp = number;
        if (DEBUG)
            printf("%i\n", number);
        divisor = 1;
        while (number / divisor >= 10)
            divisor *= 10;
        if (DEBUG)
            printf("%i\n", divisor);
        sum = 0;
        printf("The digits are: ");
        while (divisor > 0)
        {
            if (divisor == 10)
                printf("and ");
            digit = number / divisor;
            printf("%i ", digit);
            sum += digit;
            number = number % divisor;
            divisor = divisor / 10;
        }
        printf("\nThe sum of the digits is %i\n", sum);
        if (sum % 9 == 0)
            printf("Therefore %i is divisible by 9\n", temp);
        else
            printf("Therefore %i is not divisible by 9\n", temp);
    }
}