#include <stdio.h>
#define PI 3.1416
#define DEBUG 1
int main(void)
{
    double result;
    int var2, var1;
    int init, n, iterations;

    printf("Enter the number of iterations it would\n");
    printf("to generate a pi value using the formula> ");
    scanf("%i", &n);

    init = var1 = var2 = 1;
    result = init - (1.0 / (var1 + 2)) + (1.0 / (var2 + 4));
    var1 += 2;
    var2 += 4;
    for (iterations = 0; iterations < n - 1; iterations += 1)
    {
        result -= (1.0 / (var1 + 2)) + (1.0 / (var2 + 4));
        if (DEBUG)
        {
            printf("Iteration: %i var1: %i var2 %i\n", iterations, var1, var2);
        }
        var1 += 2;
        var2 += 2;
    }
    if (DEBUG)
        printf("%.4f\n", result);
    if (4 * result != PI)
        printf("Not yet. The result is %.4f. Please try again.\n", 4 * result);
    else
        printf("Good job! Keep it up.");
    return (0);

}