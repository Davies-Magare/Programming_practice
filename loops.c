#include <stdio.h>

int main()
{
    int count_emp;
    int number_emp; 
    double hours;
    double rate;
    double pay;
    double total_pay;

    printf("Enter the number of employees> ");
    scanf("%i", &number_emp);
    count_emp = 0;
    total_pay = 0.0;
    while (count_emp < number_emp)
    {
        printf("Hours> ");
        scanf("%lf", &hours);
        printf("Rate> $");
        scanf("%lf", &rate);
        pay = hours * rate;
        printf("Pay is $%6.2f\n", pay);
        total_pay = total_pay + pay;
        count_emp = count_emp + 1;
    }
    printf("\nAll employees processed\n");
    printf("Total payroll is %8.2f\n", total_pay);


}
