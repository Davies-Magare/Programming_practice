#include <stdio.h>
#include <stdbool.h>
void frac_scan(int *nump, int *denomp);
void op_scan(char *signp);
void multiply_frac(int *resnump, int *resdenomp, int num1, int denom1, int num2, int denom2);
int lcm(int m, int n);
void add_fract(int *resnump, int *resdenomp, int num1, int denom1, int num2, int denom2);
int gcd(int m, int n);
int reduce(int *resnump, int *resdenomp);
void format_frac(int *resnump, int *resdenomp, char sign, int num1, int denom1, int num2, int denom2);
int main() {
    
    int num1, denom1, num2, denom2, resnum, resdenom;
    char sign, status;
    
    do{
        frac_scan(&num1, &denom1);
    op_scan(&sign);
    frac_scan(&num2, &denom2);
    switch(sign){
        case '*':
            multiply_frac(&resnum, &resdenom, num1, denom1, num2, denom2);
            break;
        case '/':
            multiply_frac(&resnum, &resdenom, num1, denom1, denom2, num2);
            break;
        case '+':
            add_fract(&resnum, &resdenom, num1, denom1, num2, denom2);
            break;
        case '-':
            add_fract(&resnum, &resdenom, num1, denom1, -num2, denom2);
            break;
    }
    reduce(&resnum, &resdenom);
    format_frac(&resnum, &resdenom, sign, num1, denom1, num2, denom2);
    printf("Do you want to compute other fractions?\n");
    printf("Enter 'y' for yes and 'n' for no\n");
    scanf(" %c", &status);
    }while(status == 'y');
    
    printf("Adios! :)\n");

    return 0;
}
void frac_scan(int *nump, int *denomp)
{
    int error;
    
    do{
        error = 0;
        printf("Enter the numerator and denominator of your fraction> ");
        scanf("%i%i", nump, denomp);
        
        if (*denomp <= 0)
        {
            error = 1;
            printf("Error! Denominator must be larger than 0\n");
        }
    }while(error);
}
void op_scan(char *signp)
{
    int error;
    do{
        error = 0;
        printf("Enter your operator> ");
        scanf(" %c", signp);
        if (*signp != '+' && *signp != '-' && *signp != '/' && *signp != '*')
        {
            error = 1;
            printf("Invalid operator. Please try again.\n");
        }
    }while(error);
}

void multiply_frac(int *resnump, int *resdenomp, int num1, int denom1, int num2, int denom2)
{
    *resnump = num1 * num2;
    *resdenomp = denom1 * denom2;
}
int lcm(int m, int n)
{
    int max;
    
    if (m % n == 0)
        return (m);
    if (n % m == 0)
        return (n);
    if (m > n)
        max = m;
    else
        max = n;
    while (true)
    {
        if (max % m == 0 && max % n == 0)
            return (max);
        max++;
    }
}

void add_fract(int *resnump, int *resdenomp, int num1, int denom1, int num2, int denom2)
{
    
    *resdenomp = lcm(denom1, denom2);
    *resnump = (*resdenomp / denom1) * num1 + (*resdenomp / denom2) * num2;
}
int gcd(int m, int n)
{
    if (n == 0)
        return m;
    else
        return gcd(n, m % n);
}
int reduce(int *resnump, int *resdenomp)
{
    int factor;
    
    factor = gcd(*resnump, *resdenomp);
    *resnump = *resnump / factor;
    *resdenomp =*resdenomp/ factor;
}
void format_frac(int *resnump, int *resdenomp, char sign, int num1, int denom1, int num2, int denom2)
{
    int rem, whole_part;
    
    if (*resnump < *resdenomp)
    {
        printf("%i/%i %c %i/%i = %i/%i\n", num1, denom1, sign, num2, denom2, *resnump, *resdenomp);
    }
    else if (*resnump == *resdenomp)
    {
        printf("%i/%i %c %i/%i = %i\n", num1, denom1, sign, num2, denom2, 1);
    }
    else
    {
        rem = *resnump % *resdenomp;
        whole_part = *resnump / *resdenomp;
        printf("%i/%i %c %i/%i = %i %i/%i\n", num1, denom1, sign, num2, denom2, whole_part, rem, *resdenomp);
    }
 
}
