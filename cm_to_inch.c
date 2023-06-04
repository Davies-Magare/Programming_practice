#include <stdio.h>
#define STEP_CENTIMETER 10
double centimeters_to_inches(int centimeters);
int main(void)
{
    int init_centimeter;
    int final_centimeter;
    double inch_from_centimeter;
    int centimeters;

    printf("Enter the centimeter starting point> ");
    scanf("%i", &init_centimeter);
    printf("Enter the endpoint> ");
    scanf("%i", &final_centimeter);
    printf("%4cCentimeters%4cInches\n", ' ', ' ');
    for (centimeters = init_centimeter; centimeters <= final_centimeter;
        centimeters += STEP_CENTIMETER)
    {
        inch_from_centimeter = centimeters_to_inches(centimeters);
        printf("%4c%4d%11c%5.2f\n", ' ', centimeters, ' ', inch_from_centimeter);
    }

}
double centimeters_to_inches(int centimeters)
{
    return (centimeters * 0.3937);
}