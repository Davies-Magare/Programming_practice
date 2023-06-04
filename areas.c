#include <stdio.h>
#include <math.h>
#define PI 3.14159
double area_parallelogram(double base, double height);
int get_problem(int problem);
void get_base_height(double *base, double *height);
void instructions(void);
double area_triangle(double base, double height);
double area_trapezoid(double short_side, double long_side, double height);
void get_values_trapezoid(double *short_side, double *long_side, double *height);
double get_radius(double radius);
double area_circle(double radius);
int main(void)
{
    int problem;
    double base, height, area;
    double short_side, long_side;
    double radius;

    problem = get_problem(problem);
    while (problem >= 1 && problem <= 4)
    {
        switch(problem){
            case 1:
                get_base_height(&base, &height);
                area = area_parallelogram(base, height);
                printf("Area = %.2f\n", area);
                break;
            case 2:
                get_base_height(&base, &height);
                area = area_triangle(base, height);
                printf("Area = %.2f\n", area);
                break;
            case 3:
                get_values_trapezoid(&short_side, &long_side, &height);
                area = area_trapezoid(short_side, long_side, height);
                printf("Area = %.2f\n", area);
                break;
            case 4:
                radius = get_radius(radius);
                area = area_circle(radius);
                printf("Area = %.2f\n", area);
                break;
        }
        problem = get_problem(problem);
    }
}
    
void instructions(void)
{
    printf("Enter the number of the problem you wish to solve.\n");
    printf("(1) Area of a parallelogram     (4) Area of a circle\n");
    printf("(2) Area of a triangle          (5) QUIT\n");
    printf("(3) Area of a trapezoid\n");
}
void get_base_height(double *base, double *height)
{
    printf("Enter the base (cm)=> ");
    scanf("%lf", base);
    printf("Enter the height (cm)=> ");
    scanf("%lf", height);
}
int get_problem(int problem)
{
    instructions();
    printf("\nProblem> ");
    scanf("%i", &problem);
    return (problem);
}
double area_parallelogram(double base, double height)
{
    double area;

    area = base * height;
    return (area);
}
double area_triangle(double base, double height)
{
    double area;

    area = (base * height) / 2;
    return (area);
}
void get_values_trapezoid(double *short_side, double *long_side, double *height)
{
    printf("Enter the length of the short side (cm) => ");
    scanf("%lf", short_side);
    printf("Enter the length of the long side (cm) => ");
    scanf("%lf", long_side);
    printf("Enter the height (cm) => ");
    scanf("%lf", height);
}
double area_trapezoid(double short_side, double long_side, double height)
{
    double side_total, area;

    side_total = short_side + long_side;
    area = side_total / 2 * height;
    return (area);
}
double get_radius(double radius)
{
    printf("Enter the radius of the circle (cm)=> ");
    scanf("%lf", &radius);
    return (radius);
}
double area_circle(double radius)
{
    double area;

    area = PI * pow(radius, 2.0);
    return (area);
}