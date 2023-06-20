#include <stdio.h>
void instructions(void);
double calculate_bmi(double height, double weight);
void display_weight_status(double bmi);
int main(void)
{
    double weight;
    double height;
    double bmi;

    instructions();
    do{
        printf("Enter your weight in pounds> ");
        scanf("%lf", &weight);
        if (weight <= 10)
            printf("Error! Please enter your real weight\n");
    }while(weight <= 10);
    do{
        printf("Enter your height in inches> ");
        scanf("%lf", &height);
        if (height <= 5)
            printf("Error! Please enter your real height\n");
    }while(height < 5);
    bmi = calculate_bmi(height, weight);
    display_weight_status(bmi);
    return (0);
    
}
void instructions(void)
{
    printf("Hello :)\n");
    printf("This program calculates your body mass index,");
    printf(" commonly abbreviated as BMI.\n");
    printf("Please enter your weight in pounds and height");
    printf(" in inches after the prompt.\nYour height and ");
    printf("weight inputs must be valid, otherwise the program");
    printf(" will ask you to re-enter the said values again.\n");
}
double calculate_bmi(double height, double weight)
{
    return ((703 * weight) / (height * height));
}
void display_weight_status(double bmi)
{
    if (bmi < 18.5)
        printf("Your BMI is %.2f and you're underweight\n", bmi);
    else if (bmi < 24.9)
        printf("Your BMI is %.2f and your weight status is normal\n", bmi);
    else if (bmi < 29.9)
        printf("Your BMI is %.2f and you're overweight\n", bmi);
    else
        printf("Your BMI is %.2f and you're obese\n", bmi);
}