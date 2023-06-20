#include <stdio.h>

int main(void)
{
    char digit;

    digit = 3;
    printf("%i\n", (int) '0');
    printf("%i\n", (int) digit);
    printf("%i", (int) digit - (int) '0');
    return (0);
}