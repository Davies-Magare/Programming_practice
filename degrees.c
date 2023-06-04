#include <stdio.h>
#include <math.h>
#define INIT_DEGREE 10
#define FINAL_DEGREE 90
#define STEP_DEGREE 10
double degree_to_radians(int degree);
int main(void)
{
    int degree;
    double sine_degree;
    double cosine_degree;

    printf("    degree      sin(degree)     cosine(degree)\n");
    for (degree = INIT_DEGREE; degree <= FINAL_DEGREE;  degree += STEP_DEGREE)
        {
            cosine_degree = cos(degree_to_radians(degree));
            sine_degree = sin(degree_to_radians(degree));
            printf("%4c%4d%13c%4.2f%14c%4.2f\n", ' ', degree, ' ', sine_degree, ' ', cosine_degree);
        }
}
double degree_to_radians(int degree)
{
    return (0.0174533 * degree);
}