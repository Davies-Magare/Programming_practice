#include <stdio.h>
#define STUDENT_DISCOUNT 0.2
#define TAX_RATE 0.05
void discount(double purchases, char student);
int main(void)
{
    double purchases;
    char student;
    int error;
    char error_character;

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
    discount(purchases, student);

}
void discount(double purchases, char student)
{
    double tax;
    double student_discount;
    double amount_to_pay;
    double discounted_purchases;

    if (student == 'y')
    {
        student_discount = STUDENT_DISCOUNT * purchases;
        discounted_purchases = purchases - student_discount;
        tax = TAX_RATE * discounted_purchases;
        amount_to_pay = discounted_purchases + tax;

    }
    else
    {
        tax = TAX_RATE * purchases;
        amount_to_pay = purchases + tax;
    }

    /*display bill*/
    if (student == 'y')
    {
        printf("Total purchases                 %5.2f\n", purchases);
        printf("Student's discount (20%%)       %7.2f\n", student_discount);
        printf("Discounted total                %5.2f\n", discounted_purchases);
        printf("Sales tax (5%%)                 %6.2f\n", tax);
        printf("Total                           %5.2f", amount_to_pay);
    }
    else
    {
        printf("Total purchases                 %5.2f\n", purchases);
        printf("Sales tax (5%%)                  %5.2f\n", tax);
        printf("Total                           %5.2f", amount_to_pay);
    }
}