#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
#define NO_ROOT -0.9999
double bisect(double x_left, double x_right, double epislon, double f(double));
double g(double x);
double h(double x);
int main(void)
{
    double x_left;
    double x_right;
    double root;
    double epislon;

    printf("Enter the interval to search the root> ");
    scanf("%lf%lf", &x_left, &x_right);
    printf("Enter your tolerance value> ");
    scanf("%lf", &epislon);

    root = bisect(x_left, x_right, epislon, g);
    if (root != NO_ROOT)
        printf("\n    g(%.7f) = %g", root, g(root));
    printf("\n\n Function h");
    root = bisect(x_left, x_right, epislon, h);
    if (root != NO_ROOT)
        printf("\n    h(%.7f) = %g", root, h(root));

}
double bisect(double x_left, double x_right, double epislon, double f(double))
{
    double f_left,
    f_right,
    f_mid,
    x_mid,
    root_found;

    f_left = f(x_left);
    f_right = f(x_right);
    if (f_left * f_right > 0)
    {
        printf("\nNo root can be found in the interval [%.7f, %.7f]\n", x_left, x_right);
        return (NO_ROOT);
    }
    root_found = FALSE;
    while(fabs(x_right - x_left) > epislon && !root_found)
    {
        x_mid = (x_left + x_right) / 2.0;
        f_mid = f(x_mid);
        if (f_mid == 0)
            root_found = TRUE;
        else if (f_mid * f_right > 0)
            x_right = x_mid;
        else
            x_left = x_mid;
        if (root_found)
            printf("\nRoot found at %.7f. The interval is [%.7f, %.7f]", x_mid, x_left, x_right);
        else
            printf("\nThe new interval is [%.7f, %.7f]", x_left, x_right);
    }
    return ((x_left + x_right) / 2);
}
double g(double x)
{
    return (5 * pow(x, 3.0) - 2 * pow(x, 2.0) + 3);
}
double h(double x)
{
    return (pow(x, 4.0) - 3 * pow(x, 2.0) - 8);
}