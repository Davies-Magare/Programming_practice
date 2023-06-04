#include <stdio.h>
#define a 3.592
#define R 0.08206
#define b 0.0427
double pressure(double volume, double temperature, double moles_number);
void instructions(void);
int main(void)
{
    double pressure_calc, initial_volume, volume_change, final_volume,
    moles_number, temperature, volume;

    instructions();
    printf("Quantity of carbon dioxide (moles)> ");
    scanf("%lf", &moles_number);
    printf("Temperature (kelvin)> ");
    scanf("%lf", &temperature);
    printf("Initial volume (milliliters)> ");
    scanf("%lf", &initial_volume);
    printf("Final volume (milliliters)> ");
    scanf("%lf", &final_volume);
    printf("Volume change(millilitres)> ");
    scanf("%lf", &volume_change);

    printf("\n Volume (ml)          Pressure (atm)\n");
    
    for (volume = initial_volume; volume <= final_volume; volume += volume_change)
    {
        pressure_calc = pressure(volume / 1000, temperature, moles_number);
        printf("%4c%4.2f%16c%4.4f\n", ' ', volume, ' ', pressure_calc);
    }
    
}
double pressure(double volume, double temperature, double moles_number)
{
    double part1_calc, part2_calc;

    part1_calc = (moles_number * R * temperature) / (volume - (b * moles_number));
    part2_calc = (a * moles_number * moles_number) / (volume * volume);

    return (part1_calc - part2_calc);
}
void instructions(void)
{
    printf("Please enter at the prompts the number of moles of carbon\n");
    printf("dioxide, the absolute temperature, the initial volume in\n");
    printf("milliliters, the final volume ,and the increment volume\n");
    printf("between the lines of the table.\n");
}