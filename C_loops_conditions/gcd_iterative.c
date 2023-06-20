#include <stdio.h>

int main(void)
{
    int rem, num1, num2, error;

    
    do{
        error = 0;
        printf("Enter two numbers to find the gcd> ");
        scanf("%i%i", &num1, &num2);
        if (num1 == 0 || num2 == 0)
        {
            printf("Error. Entries of 0 not allowed.\n");
            error = 1;
        }
    }while(error);
    if (num1 % num2 == 0)
    {
        printf("The gcd is %i\n", num2);
    }
    else if (num2 % num1 == 0)
    {
        printf("The gcd is %i\n", num1);
    }
    else
    {
        while(num1 % num2 != 0)
        {
            rem = num1 % num2;
            num1 = num2;
            num2 = rem;
        }
        printf("The gcd is %i\n", num2);
    }
    return (0);

}