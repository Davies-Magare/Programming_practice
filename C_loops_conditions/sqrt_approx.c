#include <stdio.h>
#include <math.h>
#define DIFFERENCE 0.005
double approximate_sqrt(double n);
int main(void)
{
    double n;
    double sqrt_approx;
    printf("Enter a number to approximate the square root >> ");
    scanf("%lf", &n);
    sqrt_approx = approximate_sqrt(n);
    printf("%.2f\n", sqrt_approx);

}
double approximate_sqrt(double n)
{
    double last_guess, next_guess;

    last_guess = 1.0;
    next_guess = 0.5 * (last_guess + ( n / last_guess));

    if (fabs(next_guess - last_guess) < DIFFERENCE)
        return (next_guess);
    else
        while(fabs(next_guess - last_guess) > DIFFERENCE)
        {
            last_guess = next_guess;
            next_guess = 0.5 * (last_guess + (n / last_guess));
        }
    return (next_guess);
}