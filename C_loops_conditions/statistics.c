#include <stdio.h>
#include <math.h>
#define MAX_ITEM 8
int main(void)
{
    double x[MAX_ITEM],
    mean,
    sum,
    std_dev,
    sum_sqr;

    int i;

    /*get  values from the user*/
    printf("Enter %d numbers separated by blanks or <return>s\n> ", MAX_ITEM);
    for (i = 0; i < MAX_ITEM; i++)
        scanf("%lf", &x[i]);
    sum = 0;
    sum_sqr = 0;

    for (i = 0; i < MAX_ITEM; i++)
    {
        sum += x[i];
        sum_sqr += x[i] * x[i];
    }
    mean = sum / MAX_ITEM;
    std_dev = sqrt(sum_sqr / MAX_ITEM - mean * mean);
    printf("The mean is %.2f\n", mean);
    printf("The standard deviation is %.2f.\n", std_dev);
    printf("\nTable of differences between data values and mean\n");
    printf("Index       Item        Difference\n");
    printf("------------------------------------\n");
    for (i = 0; i < MAX_ITEM; i++)
        printf("%3d%4c%9.2f%5c%9.2f\n", i, ' ', x[i], ' ', x[i] - mean);
    return (0);
}