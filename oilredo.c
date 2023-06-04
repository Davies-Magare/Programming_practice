#include <stdio.h>
#define MIN_PCT 10
#define TANK_CAPACITY 80000.0
#define GALS_PER_BARREL 42.0
double monitor_supply(double start_supply, double minimum_supply);
int main(void)
{
    double start_supply;
    double minimum_supply;
    double current;
    
    minimum_supply = MIN_PCT / 100.0 * TANK_CAPACITY;
    printf("How many barrels are there in the tank right now?> ");
    scanf("%lf", &start_supply);
    current = monitor_supply(start_supply, minimum_supply);
    printf("only %.2f barrels are remaining in the tank.\n\n", current);
    printf("****WARNING****\n");
    printf("The tank's remaining oil supply is less than %d percent \n", MIN_PCT);
    printf("of the tank's %.2f oil capacity.\n", TANK_CAPACITY);
    return (0);

}
double monitor_supply(double start_supply, double minimum_supply)
{
    double remov_gal,
    remov_brl,
    current;

    for (current = start_supply; current >= minimum_supply; current -= remov_brl)
    {
        printf("%.2f barrels are available.\n", current);
        printf("Enter the number of gallons removed> ");
        scanf("%lf", &remov_gal);
        remov_brl = remov_gal / GALS_PER_BARREL;
        printf("After removal of %.2f gallons (%.2f barrels), ", remov_gal, remov_brl);
    }
    return (current);
}
