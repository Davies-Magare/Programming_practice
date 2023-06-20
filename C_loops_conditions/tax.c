#include <stdio.h>
double calc_tax(double salary);
int main(void)
{
    double tax, salary;
    printf("Enter your salary> ");
    scanf("%lf", &salary);
    tax = calc_tax(salary);
    if (tax < 0)
        printf("Error! Your salary beyond the accepted range.\n");
    else
        printf("The tax over your salary of %.4f is %.4f\n", salary, tax);
}
double calc_tax(double salary)
{
    double tax;

    if (salary < 0.0)
        tax = -0.1;
    else if (salary < 15000)
        tax = 0.15 * salary;
    else if (salary < 30000)
        tax = (salary - 15000) * 0.18 + 2250;
    else if (salary < 50000)
        tax = (salary - 30000) * 0.22 + 5400;
    else if (salary < 80000)
        tax = (salary - 50000) * 0.27 + 11000;
    else if (salary < 150000)
        tax = (salary - 80000) * 0.33 + 21600;
    else
        tax = -0.1;
    return tax;
    
}