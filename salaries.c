#include <stdio.h>
#define TAX_RATE 0.03625
#define OVERTIME_RATE 1.5
#define HOURLY_WAGE_RATE 20
#define DEBUG 0
double pay(double total_work_hours);
int main(void)
{
    int id;
    double total_workhrs, employee_pay, total_pay;
    int numb_emp, count;

    printf("Enter the number of employees> ");
    scanf("%i", &numb_emp);
    for (count = 0; count < numb_emp; count += 1)
    {
        printf("Enter the employee id> ");
        scanf("%i", &id);
        printf("Enter the total work hours> ");
        scanf("%lf", &total_workhrs);
        if (DEBUG)
            printf("%3.2f\n", total_workhrs);
        employee_pay = pay(total_workhrs);
        if(DEBUG)
            printf("%3.2f\n", employee_pay);
        printf("ID: %i\n", id);
        printf("PAY: $%3.2f\n", employee_pay);

        total_pay += employee_pay;
    }
    printf("\n\nTotal Payroll: $%3.2f\n", total_pay);
}
double pay(double total_work_hours)
{
    double extra_hours, overtime_pay,
    gross_pay, total_pay;

    extra_hours = 0;
    if (total_work_hours > 40)
    {
        extra_hours = total_work_hours - 40;
        overtime_pay = 1.5 * HOURLY_WAGE_RATE * extra_hours;
        gross_pay = 40 * HOURLY_WAGE_RATE + overtime_pay;
        total_pay = gross_pay - (TAX_RATE * gross_pay);
    }
    else
    {
        gross_pay = total_work_hours * HOURLY_WAGE_RATE;
        total_pay = gross_pay - (TAX_RATE * gross_pay);
    }
    return total_pay;
}