#include <stdio.h>
void instructions(void);
int data_charges(double data_usage);
int main(void)
{
    double usage;
    int charges;

    instructions();
    printf("\n");
    do{
        printf("Enter your data usage in gbs for the last month> ");
        scanf("%lf", &usage);
        if (usage < 0)
            printf("Error! Please try again.\n");
    }while(usage < 0);
    charges = data_charges(usage);
    printf("Your data bill this month is $%i", charges);

}

void instructions(void)
{
    printf("Hello:)\n");
    printf("Enter the customer's data usage for this month in gigabytes.\n");
    printf("The entry should be valid--for any inputs ");
    printf("less than zero, \nyou will be prompted to re-enter ");
    printf("the data usage value.\n");
}
int data_charges(double data_usage)
{
    int charges;

    if (data_usage < 1.0)
        charges = 250;
    else if (data_usage < 2.0)
        charges = 500;
    else if (data_usage < 5.0)
        charges = 1000;
    else if (data_usage < 10.0)
        charges = 1500;
    else
        charges = 2000;
    
    return (charges);

}