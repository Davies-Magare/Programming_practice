#include <stdio.h>
#define DEBUG 0
int main(void)
{
    int numbers_tot, number,counter;
    int odd, even, sum_even, sum_odd;

    printf("How many numbers do you want to enter?> ");
    scanf("%i", &numbers_tot);
    counter= 0;
    odd = 0; 
    even = 0;
    sum_even = 0;
    sum_odd = 0;
    while (counter < numbers_tot)
    {
        printf("Enter a number> ");
        scanf("%i", &number);
        if (DEBUG)
            printf("%i\n", number);
        if (number % 2 == 0)
        {
            even++;
            sum_even += number;
        }
        else
        {
            odd++;
            sum_odd += number;
        }
        counter++;
    }
    printf("You input %d odd numbers and %d even numbers\n", odd, even);
    printf("The sum of even numbers is %i and that of odd numbers is %i\n", sum_odd, sum_even);
    printf("The square of the sum of odd numbers is %i", sum_even * sum_even);
    printf(" and that of odd numbers is %i\n", sum_odd * sum_odd);
    return (0);
}
    
 
