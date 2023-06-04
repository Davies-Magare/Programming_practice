#include <stdio.h>
#include <math.h>
void separate(double num, char *signp, int *wholep, double *fracp);
int main(void)
{
    char sign;
    int whole;
    double frac;
    double num;

    printf("Enter your number> ");
    scanf("%lf", &num);
    separate(num, &sign, &whole, &frac);
    printf("Number: %.4f\nSign: %c\nWholepart: %i\nFrac Part: %.4f\n", 
            num, sign, whole, frac);
}
void separate(double num, char *signp, int *wholep, double *fracp)
{
    double magnitude;

    if (num < 0)
        *signp = '-';
    else if (num == 0)
        *signp = ' ';
    else
        *signp = '+';
    magnitude = fabs(num);
    *wholep = floor(magnitude);
    *fracp = magnitude - *wholep;
}