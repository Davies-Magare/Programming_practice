#include <stdio.h>
#define TANK_CAPACITY 80000.0
#define MIN_CAPACITY 10
#define GALLONS_PER_BARREL 42.0
double monitor_gas(double min_supply, double start_supply);
int main(void)
{
    double start_supply;
    double min_supply;
    double current;

    min_supply = MIN_CAPACITY / 100.0 * TANK_CAPACITY;
    /*get the amount of oil in the tank*/
    printf("How many barrels of oil are still in the tank?> ");
    scanf("%lf", &start_supply);
    current = monitor_gas(min_supply, start_supply);
    /*Issue warning*/
    printf("only %.2f barrels are remaining in the tank.\n\n", current);
    printf("****WARNING****\n");
    printf("The tank's remaining oil supply is less than %d percent\n", MIN_CAPACITY);
    printf("allowed of the tank's %.2f oil capacity.\n", TANK_CAPACITY);
}
double monitor_gas(double min_supply, double start_supply)
{
    double remov_gals;
    double remov_brls;
    double current;

    for (current = start_supply; current >= min_supply; current -= remov_brls)
    {
        printf("%.2f barrels are available\n\n", current);
        printf("Enter the number of gallons removed> ");
        scanf("%lf", &remov_gals);
        remov_brls = remov_gals / GALLONS_PER_BARREL;
        printf("After removal of %.2f gallons(%.2f barrrels), \n", remov_gals, remov_brls);
    }
    return (current);
}