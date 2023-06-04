#include <stdio.h>
#include <math.h>
#define COBALT_HALF_LIFE 5.272
#define DEBUG 0
int main(void)
{
    double initial_amount, decayed;
    double decay;
    double remaining_amount;
    double cobalt_constant;
    int year;

    printf("Enter the initial amount of cobalt in grams> ");
    scanf("%lf", &initial_amount);
    cobalt_constant = pow(2.71828, -0.693);
    printf("Year        Cobalt amount (grams)\n");
    
    for (decay = initial_amount, year = 0; year < 5;
        decay -= decayed, year += 1)
    {
        remaining_amount = initial_amount * 
            pow(cobalt_constant, (year + 1) / COBALT_HALF_LIFE);
        if (DEBUG)
            printf("%.4f\n", remaining_amount);
        decayed = initial_amount - remaining_amount;
        if (DEBUG)
            printf("%.4f\n", decayed);
        printf("%3d%14c%.4f\n", year + 1, ' ', remaining_amount);
    }
    return (0);

}