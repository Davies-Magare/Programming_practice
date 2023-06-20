#include <stdio.h>
int power_recursion(int x, int power);
int main(void)
{
    int k;

    k = power_recursion(-2, 3);
    printf("%i", k);
}
int power_recursion(int x, int power)
{
    if (power == 0)
        return (1);
    else
        return (x * power_recursion(x, power - 1));
}