#include <stdio.h>
#include <math.h>
#define FALSE 0
#define TRUE 1
#define NO_ROOT -9999.0
double g(double x);
double h(double x);
double bisect(double x_left, double x_right, double epsilon, double f(double farg));
int main(void)
{
    double x_left;
    double x_right;
    double epsilon;
    double root;

    printf("Enter the interval endpoints> ");
    scanf("%lf%lf", &x_left, &x_right);
    printf("Enter the tolerance value> ");
    scanf("%lf", &epsilon);
    root = bisect(x_left, x_right, epsilon, g);
    if (root != NO_ROOT)
        printf("\n      g(%.7f) = %e\n", root, g(root));
    printf("\n\n Function h\n");
    root = bisect(x_left, x_right, epsilon, h);
    if (root != NO_ROOT)
        printf("\n      h(%.7f) = %e\n", root, h(root));
    return (0);

}
double bisect(double x_left, double x_right, double epsilon, double f(double farg))
{
    double f_left;
    double f_right;
    double f_mid;
    double x_mid;
    int root_found;

    x_mid = (x_left + x_right) / 2.0;
    f_left = f(x_left);
    f_right = f(x_right);
    if (f_left * f_right > 0)
    {
        printf("\nNo root can be found between [%.7f, %.7f]", x_left, x_right);
        return (NO_ROOT);
    }
    root_found = FALSE;
    while(fabs(x_right - x_left) > epsilon && !root_found)
    {
        x_mid = (x_left + x_right) / 2.0;
        f_mid = f(x_mid);

        if (f_mid == 0.0)
        {
            root_found = TRUE;
        }
        else if (f_mid * f_left < 0.0)
        {
            x_right = x_mid;
        }
        else
        {
            x_left = x_mid;
        }
        
        if (root_found)
        {
            printf("\nRoot found at x = %.7f, midpoint of [%.7f, %.7f]", x_mid, x_left, x_right);
        }
        else
             printf("\nNew interval is [%.7f, %.7f]", x_left, x_right);
    }
    return ((x_left + x_right) / 2.0);

}
double g(double x)
{
    return (5 * pow(x, 3.0) - 3 * pow(x, 2.0) + 3);
}
double h(double x)
{
    return (pow(x, 4.0) - 3 * pow(x, 2.0) - 8);
}