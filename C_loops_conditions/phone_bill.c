#include <stdio.h>
#define FLAT_RATE 39.99
#define TAX_RATE 0.0525
#define ADDITIONAL_MINUTES_RATE 0.40
void user_instructions(void);
void calculate_bill(int weekday_minutes, int night_minutes, int weekend_minutes);

int main(void)
{
    int weekday_minutes;
    int night_minutes;
    int weekend_minutes;

    user_instructions();
    printf("\n");
    do{
        printf("Enter your total weekday minutes> ");
        scanf("%d", &weekday_minutes);
        printf("Enter your total night minutes> ");
        scanf("%d", &night_minutes);
        printf("Enter your total weekend minutes> ");
        scanf("%d", &weekend_minutes);
    }while(weekday_minutes < 0 || night_minutes < 0 || weekend_minutes < 0);
    printf("\n");
    calculate_bill(weekday_minutes, night_minutes, weekend_minutes);
    printf("\n");


}
void user_instructions(void)
{
    printf("Hello :)\n");
    printf("This program calculates and displays a customer's \n");
    printf("phone bill based on the number of minutes they consume each month. \n");
    printf("Night and weekend minutes are free for each customer.\n");
    printf("We offer customers 600 weekday minutes for a flat \n");
    printf("rate of 39.99. Each extra weekday minute consumed after \n");
    printf("that will cost the user 40 cents. There are taxes \n");
    printf("of 5.25%% on all charges.\n");
    printf("Enter the month's total weekday minutes, night minutes \n");
    printf("and weekend minutes after the prompt. Values below \n");
    printf("0 are invalid, and the program will consequently ask the user \n");
    printf("to enter new values.\n");
}

void calculate_bill(int weekday_minutes, int night_minutes, int weekend_minutes)
{
    int extra_minutes;
    double extra_minutes_cost, total_charges;
    double taxes, pretax_amount, cost_per_minute;

    /* calculate the charges*/
    extra_minutes = weekday_minutes - 600;
    extra_minutes_cost = ADDITIONAL_MINUTES_RATE * extra_minutes;
    pretax_amount = FLAT_RATE + extra_minutes_cost;
    taxes = TAX_RATE * pretax_amount;
    total_charges = taxes + pretax_amount;
    cost_per_minute = pretax_amount / weekday_minutes;

    /*display the results*/
    printf("Weekday Minutes             %8d\n", weekday_minutes);
    printf("Night Minutes               %8d\n", night_minutes);
    printf("Weekend Minutes             %8d\n", weekend_minutes);
    printf("Pre-tax Bill                %8.2f\n", pretax_amount);
    printf("Minute Cost pre-tax         %8.2f\n", cost_per_minute);
    printf("Total Taxes                 %8.2f\n", taxes);
    printf("_____________________________________\n");
    printf("Total Charges               %8.2f\n", total_charges);

}
