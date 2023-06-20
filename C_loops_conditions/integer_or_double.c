#include <stdio.h>

int main(void)
{
    double num, diff;
    int integer_num, whole_num, frac_num;
    whole_num = frac_num = 0;
    printf("Enter your number> ");
    scanf("%lf", &num);
    while (num != 0)
    {
        integer_num = num;
        diff = num - integer_num;
        if (diff > 0)
            frac_num += 1;
        else
            whole_num += 1;

        printf("Enter your number(0 to exit)> ");
        scanf("%lf", &num);
    }
    printf("Your input consists of %i whole numbers and ", whole_num);
    printf("%i numbers with a fraction\n", frac_num);
}