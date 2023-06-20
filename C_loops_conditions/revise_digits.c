#include <stdio.h>
int main(void)
{
    int sum;
    char digit;
    int number;

    printf("You will enter your number digit by digit \n");
    printf ("Enter your first digit> ");
    scanf("%c", &digit);
    sum = 0;
    while (digit != '0')
    {
        number = (int) digit - (int) '0';
        sum += number;
        printf("Digit %i \n", number);
        printf("Enter your next digit (0 to exit)> ");
        scanf("*[%^\n]");
        scanf("%\n");
        scanf("%c", &digit);
    }
    printf("\n The sum of your digits is %i", sum);
}