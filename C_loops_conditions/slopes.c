#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define DEBUG 0
void instructions(void);
int get_problem(int problem);
void get_pt_slope(double *x, double *y, double *slope);
double intcpt_from_pt_slope(double x, double y, double slope);
void display_pt_slope(double x, double y, double slope);
void display_slope_intcpt(double slope, double intercept);
void get2_pt(double *x1, double *y1, double *x2, double *y2);
void display2_pt(double x1, double y1, double x2, double y2);
void slope_intcpt_from2_pt(double x1, double y1, double x2, double y2, double *slope, double *intercept);
int main(void)
{
    int problem;
    double x, y, slope;
    double intercept;
    double x1, y1, x2, y2;
    char again;

    do{
        problem = get_problem(problem);
        switch(problem){
        case 2:
            get_pt_slope(&x, &y, &slope);
            intercept = intcpt_from_pt_slope(x, y, slope);
            display_pt_slope(x, y, slope);
            display_slope_intcpt(slope, intercept);
            break;
        case 1:
            get2_pt(&x1, &y1, &x2, &y2);
            slope_intcpt_from2_pt(x1, y1, x2, y2, &slope, &intercept);
            display2_pt(x1, y1, x2, y2);
            display_slope_intcpt(slope, intercept);
            break;
        }
        printf("Do another conversion (Y or N)=> ");
        scanf(" %c", &again);
        if (DEBUG)
            printf("%c", again);
    }while(again == 'Y' || again == 'y');
    return (0);
}
void instructions(void)
{
    printf("\nSelect the form that you would like to convert\n");
    printf(" to slope-intercept form: \n");
    printf("1) Two-point form (you know two points on the line)\n");
    printf("2) Point-slope form (you know the line's slope and one point)\n");
    printf("\n=> ");
}
int get_problem(int problem)
{
    int error;

    do{
        instructions();
        scanf("%i", &problem);
        if (problem == 1 || problem == 2)
            error = 0;
        else
        {
            error = 1;
            printf("Error. Please try again.\n");
        }
    }while(error);
    return (problem);
}
void get_pt_slope(double *x, double *y, double *slope)
{
    printf("Enter the slope=> ");
    scanf("%lf", slope);
    printf("Enter the x-y coordinates of the point separated by a space=> ");
    scanf("%lf%lf", x, y);
}
double intcpt_from_pt_slope(double x, double y, double slope)
{
    double intercept;

    intercept = slope * -x + y;
    return (intercept);
}
void display_pt_slope(double x, double y, double slope)
{
    printf("Point-slope form\n");
    printf("y - %.2f = %.2f(x - %.2f)\n", y, slope, x);
}
void display_slope_intcpt(double slope, double intercept)
{
    printf("\nSlope-intercept form\n");
    if (intercept < 0)
        printf("y = %.2fx - %.2f\n",slope, fabs(intercept));
    else
        printf("y = %.2fx + %.2f\n",slope, intercept);
}
void get2_pt(double *x1, double *y1, double *x2, double *y2)
{
    printf("Enter the x-y coordinates of the first point separated by a\n");
    printf("space=> ");
    scanf("%lf%lf", x1, y1);
    printf("Enter the x-y coordinates of the second point separated by a\n");
    printf("space=> ");
    scanf("%lf%lf", x2, y2);
}
void slope_intcpt_from2_pt(double x1, double y1, double x2, double y2, double *slope, double *intercept)
{
    *slope = (y2 - y1) / (x2 - x1);
    *intercept = *slope * x1 - y1;
}
void display2_pt(double x1, double y1, double x2, double y2)
{
    printf("Two-point form\n");
    printf("    (%.2f - %.2f)\n", y2, y1);
    printf("m = --------------\n");
    printf("    (%.2f - %.2f)\n", x2, x1);
}