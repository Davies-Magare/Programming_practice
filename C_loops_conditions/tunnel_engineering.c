#include <stdio.h>
#include <math.h>
#define CONSTANT 1.486
#define ROUGHNESS_COEFFICIENT 0.014
#define WIDTH 15.00
#define SLOPE 0.0015
#define TARGET_FLOW 1000.000
#define ERROR_MARGIN 0.1
#define DEBUG 0
#define RUN 1
double manning_calculation(double depth);
double flow_approximation(double water_flow);
int main(void)
{
    double depth;
    double water_flow, error;
    double percentage, percentage_difference;

    while (RUN)
    {
        printf("Enter your initial guess for the channel depth\n");
        printf("when the flow is 1000.0000 cubic feet per second\n");
        printf("Enter guess> ");
        scanf("%lf", &depth);
        water_flow = manning_calculation(depth);
        if (DEBUG)
            printf("%.4f\n", water_flow);
        percentage = flow_approximation(water_flow);
        error = 100.0 - percentage;
        printf("Depth: %.4f Flow: %.4f cfs Target: %.4f cfs\n", depth, water_flow, TARGET_FLOW);
        if (error != ERROR_MARGIN)
        {
            printf("Difference: %.4f Error: %.4f percent\n", TARGET_FLOW - water_flow, error);
        }
        else
        {
            printf("Difference: %.4f Error: %.4f percent\n", TARGET_FLOW - water_flow, error);
            printf("Your depth guess is within the accepted approximation.\n");
        }
    }
}
double manning_calculation(double depth)
{
    double result;
    double area, hydraulic_radius;

    area = depth * WIDTH;
    hydraulic_radius = area / (2.0 * depth + WIDTH);
    result = (CONSTANT / ROUGHNESS_COEFFICIENT) * area * 
        pow(hydraulic_radius, 2.0 / 3.0) * pow(SLOPE, 0.5);
    return (result);
}
double flow_approximation(double water_flow)
{
    return ((water_flow / TARGET_FLOW) * 100.00);
}