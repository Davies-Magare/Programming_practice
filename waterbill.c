#include <stdio.h>
#define DEMAND_CHG 35.00
#define PER_1000_CHG 1.10
#define LATE_CHG  2.00
#define CONSERV_RATE 95
#define OVERUSE_CHG_RATE 2.0
void instruct_water(void);
double comp_use_chg(int previous_reading, int current_reading, int last_year_use);
double comp_late_chg(double unpaid_balance);
void display_bill(double late_charge, double bill, double unpaid);

int main(void)
{
    int previous;
    int current;
    int used; /*number of gallons used by the user*/
    int use_last_year;
    double unpaid;
    double use_charge;
    double bill;
    double late_charge;

    /*Get user data*/
    instruct_water();
    
    /*Get user data: unpaid balance, current and previous meter readings*/
    printf("Enter the unpaid balance> ");
    scanf("%lf", &unpaid);
    printf("Enter last year's water use: ");
    scanf("%i", &use_last_year);
    printf("Enter the previous meter reading> ");
    scanf("%i", &previous);
    printf("Enter the current meter reading> ");
    scanf("%i", &current);
    /*calculate the user charge*/
    use_charge = comp_use_chg(previous, current, use_last_year);
    /*Determine applicable late charge*/
    late_charge = comp_late_chg(unpaid);
    /*calculate bill*/
    bill = DEMAND_CHG + use_charge + unpaid + late_charge;
    /*display the bill*/
    display_bill(late_charge, bill, unpaid);


}
void instruct_water(void)
{
    printf("This program figures a water bill ");
    printf("based on the demand charge \n");
    printf("($%.2f ) and a $%.2f per 1000 ", DEMAND_CHG, PER_1000_CHG);
    printf("gallons use charge. \n\n");
    printf("A $%.2f surcharge is added to ", LATE_CHG);
    printf("accounts with an unpaid balance. \n");
    printf("If your water use this year is above %i percent of last year, ", CONSERV_RATE);
    printf("you're charged %f the normal rate per 1000 gallons\n", OVERUSE_CHG_RATE);
    printf("\nEnter unpaid balance, previous ");
    printf("and current meter readings\n");
    printf("on separate lines after the prompts.\n");
    printf("Press <return> or <enter> after  ");
    printf("typing each number.\n\n");

}
double comp_use_chg(int previous_reading, int current_reading, int last_year_use)
{
    int used;
    double use_charge;

    used = current_reading - previous_reading;
    if (used <= (CONSERV_RATE / 100.0) * last_year_use)
        use_charge = used * PER_1000_CHG;
    else
    {
        printf("Use charge is at %.2f times ", OVERUSE_CHG_RATE);
        printf("normal rate since use of \n");
        printf("%d units exceeds %i percent ", used, CONSERV_RATE);
        printf("of last year's %i-unit use. \n", last_year_use);
        use_charge = OVERUSE_CHG_RATE * PER_1000_CHG * used;
    }
    return (use_charge);
}
double comp_late_chg(double unpaid_balance)
{
    double late_charge;

    if (unpaid_balance > 0)
        late_charge = LATE_CHG;
    else
        late_charge = 0;
    return late_charge;
}

void display_bill(double late_charge, double bill, double unpaid)
{
    if (late_charge > 0.0)
        {
            printf("\nBill includes $%.2f late charge", late_charge);
            printf(" on unpaid balance of $%.2f\n", unpaid);
        }
        printf("\nTotal due = $%.2f\n", bill);
    
}
