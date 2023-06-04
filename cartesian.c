#include <stdio.h>
void instructions(void);
void cartesian_quadrant(double x, double y);
int main(void)
{
    double x, y;

    instructions();
    printf("Enter your x coordinates> ");
    scanf("%lf", &x);
    printf("Enter your y coordinates> ");
    scanf("%lf", &y);
    cartesian_quadrant(x, y);
    printf("\n");
}
void instructions(void)
{
    printf("This program determines the quadrant or axis ");
    printf("on which the cartesian coordinates \nyou enter lie. ");
    printf("Quadrant I is the top right quadrant and quadrant ");
    printf("II top left. \nQuadrants III and IV are the bottom ");
    printf("left and right quadrants respectively.\n");
}
void cartesian_quadrant(double x, double y)
{
    if (x == 0.0)
        printf("(%.1f, %.1f) is on the y-axis", x, y);
    else if (y == 0)
        printf("(%.1f, %.1f) is on the x-axis", x, y);
    else if (x < 0 && y > 0)
        printf("(%.1f, %.1f) is on quadrant II", x, y);
    else if (x > 0 && y > 0)
        printf("(%.1f, %.1f) is on quadrant I", x, y);
    else if (x < 0 && y < 0)
        printf("(%.1f, %.1f) is on quadrant III", x, y);
    else
        printf("(%.1f, %.1f) is on quadrant IV", x, y);
}