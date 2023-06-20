#include <stdio.h>
#define STUDENT_DISCOUNT 0.2
#define TAX_RATE 0.05
void display(double purchases, double sales_tax, double amount_to_pay, char student, double student_discount);
int main(void)
{
    double purchases;
    double student_discount;
    double sales_tax;
    double purchases_copy;
    double amount_to_pay;
    char student;
    int error;

    printf("Hello :)\n");
    do{
        printf("Enter 'y' if you're a student and 'n' if otherwise> \n");
        scanf("%c", &student);
        if (student == 'y' || student == 'n')
            error = 0;
        else
        {
        
            error = 1;
            printf("Invalid character. Please read the instructions\n");
            while(getchar() != '\n'){}
        }
    }while(error);
    do{
        printf("Enter your total purchases in dollars> \n");
        scanf("%lf", &purchases);
        if (purchases < 0)
            printf("Error! The total amount purchases must be greater than 0");
    }while(purchases < 0);
    purchases_copy = purchases;
    if (student == 'y')
    {      
        student_discount = STUDENT_DISCOUNT * purchases;
        purchases = purchases - student_discount;
    }
    sales_tax = TAX_RATE * purchases;
    amount_to_pay = purchases + sales_tax;
    purchases = purchases_copy;
    display(purchases, sales_tax, amount_to_pay, student, student_discount);
    
}
void display(double purchases, double sales_tax, double amount_to_pay, char student, double student_discount)
    {
        printf("Total purchases             $%8.2f\n", purchases);
        if (student == 'y')
        {
            printf("Student's discount (20%%)   %8.2f\n", student_discount);
            printf("Discounted total            %8.2f\n", purchases - student_discount);    
        }
        printf("Sales tax (5%%)                 %8.2f\n", sales_tax);
        printf("Total                           $%8.2f", amount_to_pay);
    }
