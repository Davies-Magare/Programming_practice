#include <stdio.h>
#include <math.h>
int get_problem(int problem);
void instructions(void);
void get_rate_drop_factor(int *drop_factor, int *rate);
int fig_drops_min(int drop_factor, int rate);
int fig_ml_hr(int hours);
int by_weight(double weight, double rate_mg, double concentration);
void get_kg_rate_conc(double *weight, double *rate_mg, double *concentration);
void get_units_conc(double *units_hr, double *units_conc);
int by_units(double units_hr, double units_conc);
int main(void)
{
    int problem, drop_factor, drops_min;
    int rate, hours, ml_hr, rate_mil;
    double rate_mg, weight, concentration;
    double units_hr, units_conc;

    problem = get_problem(problem);
    while(problem >= 1 && problem <= 4)
    {
        switch(problem){
            case 1:
                get_rate_drop_factor(&drop_factor, &rate);
                drops_min = fig_drops_min(drop_factor, rate);
                printf("The drop rate per minute is %i\n", drops_min);
                break;
            case 2:
                printf("Enter number of hours=> ");
                scanf("%i", &hours);
                ml_hr = fig_ml_hr(hours);
                printf("The rate in milliliters per hour is %i\n", ml_hr);
                break;
            case 3:
                get_kg_rate_conc(&weight, &rate_mg, &concentration);
                ml_hr = by_weight(weight, rate_mg, concentration);
                printf("The rate in milliliters per hour is %i\n", ml_hr);
                break;
            case 4:
                get_units_conc(&units_hr, &units_conc);
                rate_mil = by_units(units_hr, units_conc);
                printf("The rate in milliliters per hour is %i\n", rate_mil);
                break;
        }
        problem = get_problem(problem);
    }
    return (0);
}
int get_problem(int problem)
{
    printf("Enter the number of the problem you wish to solve.\n");
    instructions();
    printf("\nProblem> ");
    scanf("%i", &problem);
    return (problem);
}
void instructions(void)
{
    printf("GIVEN A MEDICAL ORDER IN                        CALCULATE RATE IN\n");
    printf("(1) ml/hr & tubing drop factor                  drops / min\n");
    printf("(2) 1L for n hr                                 ml / hr\n");
    printf("(3) mg / kg /hr & concentration in mg / ml      ml / hr\n");
    printf("(4) units/ hr & concentration in units / ml     ml / hr\n");
    printf("(5) QUIT\n");
}
void get_rate_drop_factor(int *drop_factor, int *rate)
{
    do{
        printf("Enter tubing's drop factor(drops/ml) => ");
        scanf("%i", drop_factor);
        printf("Enter the rate per hour> ");
        scanf("%i", rate);
        if (*drop_factor <= 0 || *rate <= 0)
            printf("Invalid input. Please try again.\n");
    }while(*drop_factor <= 0 || *rate <= 0);
    
}
int fig_drops_min(int drop_factor, int rate)
{
    double drops_min;

    drops_min = ((double)(drop_factor * rate) / 60);
    return ((int) round(drops_min));
}
int fig_ml_hr(int hours)
{
    double ml_hr;

    ml_hr = (double) 1000 / hours;
    return ((int) round(ml_hr));
}
void get_kg_rate_conc(double *weight, double *rate_mg, double *concentration)
{
    printf("Enter rate in mg/kg/hr=> ");
    scanf("%lf", rate_mg);
    printf("Enter patient weight in kg=> ");
    scanf("%lf", weight);
    printf("Enter the concentration in mg/ml=> ");
    scanf("%lf", concentration);
}
int by_weight(double weight, double rate_mg, double concentration)
{
    double total_rate, final_unit;

    total_rate = rate_mg * weight;
    final_unit = total_rate / concentration;
    return ((int) round(final_unit));
}
void get_units_conc(double *units_hr, double *units_conc)
{
    printf("Enter rate in units/hr=> ");
    scanf("%lf", units_hr);
    printf("Enter the concentration in units/ml=> ");
    scanf("%lf", units_conc);
}
int by_units(double units_hr, double units_conc)
{
    double mils_hr;

    mils_hr = units_hr / units_conc;
    return ((int) round(mils_hr));
}