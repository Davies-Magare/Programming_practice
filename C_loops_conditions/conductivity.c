#include <stdio.h>
#include <math.h>
int get_values(double *heat_transf_rate, double *thermal_conduc, double *area,
                double *temp2, double *temp1, double *cond_thickness);
double calc_h(double thermal_conduc, double area, double temp2, double temp1,
                double cond_thickness);
double calc_k(double heat_transf_rate, double area, double temp2, double temp1,
                double cond_thickness);
double calc_area(double heat_transf_rate, double thermal_conduc, double temp2,
                    double temp1, double cond_thickness);
double calc_temp1(double heat_transf_rate, double thermal_conduc, double area, double temp2,
                    double conduc_thickness);
double calc_temp2(double heat_transf_rate, double thermal_conduc, double area, double temp1,
                    double conduc_thickness);
double calc_thickness_conduc(double heat_transf_rate, double thermal_conduc, double area,
                                double temp1, double temp2);
int main(void)
{
    double heat_transf_rate, thermal_conduc, area;
    double temp2, temp1, cond_thickness;
    int selector;

    selector = get_values(&heat_transf_rate, &thermal_conduc, &area,
                &temp2, &temp1, &cond_thickness);
    switch (selector){
        case 1:
            heat_transf_rate = calc_h(thermal_conduc, area, temp2, temp1,
                cond_thickness);
            printf("The rate of heat transfer (watts) is %.2f", heat_transf_rate);
            break;
        case 2:
            thermal_conduc =  calc_k(heat_transf_rate, area, temp2, temp1,
                cond_thickness);
            printf("The coefficient of thermal conductivity (W/m-K) is %.2f\n", thermal_conduc);
            break;
        case 3:
            area =  calc_area(heat_transf_rate, thermal_conduc, temp2,
                     temp1, cond_thickness);
            printf("The cross-sectional area of the conductor (m^2) is %.2f\n", area);
            break;
        case 4:
            temp1 = calc_temp1(heat_transf_rate, thermal_conduc,  area,  temp2,
                    cond_thickness);
            printf("The temperature on one side (K) is %.2f\n", temp1);
            break;
        case 5:
            temp2 = calc_temp2(heat_transf_rate, thermal_conduc, area, temp1,
                    cond_thickness);
            printf("The temperature on the other side (K) is %.2f\n", temp2);
            break;
        case 6:
            cond_thickness = calc_thickness_conduc(heat_transf_rate, thermal_conduc, area,
                                temp1, temp2);
            printf("The thickness of the conductor (m) is %.2f\n", cond_thickness);
            break;            
    }
    return (0);
}
int get_values(double *heat_transf_rate, double *thermal_conduc, double *area,
                double *temp2, double *temp1, double *cond_thickness)
{
    int status, value;
    char discard;

    printf("Respond to the prompts with the data known. For the\n");
    printf("unknown quantity, enter a question amrk (?)\n");
    printf("Rate of heat transfer(watts)>> ");
    status = scanf("%lf", heat_transf_rate);
    if (status == 0)
        value = 1;
    do{
        scanf("%c", &discard);
    }while (discard != '\n');
    printf("Coefficient of thermal conductivity (W/m-k) >> ");
    status = scanf("%lf", thermal_conduc);
    if (status == 0)
        value = 2;
    do{
        scanf("%c", &discard);
    }while (discard != '\n');
    printf("Cross-sectional area of conductor (m^2) >> ");
    status = scanf("%lf", area);
    if (status == 0)
        value = 3;
    do{
        scanf("%c", &discard);
    }while (discard != '\n');
    printf("Temperature on one side (K) >> ");
    status = scanf("%lf", temp1);
    if (status == 0)
        value = 4;
    do{
        scanf("%c", &discard);
    }while (discard != '\n');
    printf("Temperature on other side (K) >> ");
    status = scanf("%lf", temp2);
    if (status == 0)
        value = 5;
    do{
        scanf("%c", &discard);
    }while (discard != '\n');
    printf("Thickness of conductor (m) >> ");
    status = scanf("%lf", cond_thickness);
    if (status == 0)
        value = 6;
    return (value);
}
double calc_h(double thermal_conduc, double area, double temp2, double temp1,
                double cond_thickness)
{
    double heat_transf_rate;

    heat_transf_rate = (thermal_conduc * area * (temp2 - temp1)) / cond_thickness;
    return (heat_transf_rate); 
}
double calc_k(double heat_transf_rate, double area, double temp2, double temp1,
                double cond_thickness)
{
    double thermal_conduc;

    thermal_conduc = (heat_transf_rate * cond_thickness) / (area * (temp2 - temp1));
    return (thermal_conduc);
}
double calc_area(double heat_transf_rate, double thermal_conduc, double temp2,
                    double temp1, double cond_thickness)
{
    double area;

    area = (heat_transf_rate * cond_thickness) / (thermal_conduc * (temp2 - temp1));
    return (area);
}
double calc_temp1(double heat_transf_rate, double thermal_conduc, double area, double temp2,
                    double conduc_thickness)
{
    double temp1;

    temp1 = temp2 - ((heat_transf_rate * conduc_thickness) / (thermal_conduc * area));
    return (temp1);
}
double calc_temp2(double heat_transf_rate, double thermal_conduc, double area, double temp1,
                    double conduc_thickness)
{
    double temp2;

    temp2 = temp1 + ((heat_transf_rate * conduc_thickness) / (thermal_conduc * area));
    return (temp2);
}
double calc_thickness_conduc(double heat_transf_rate, double thermal_conduc, double area,
                                double temp1, double temp2)
{
    double thickness_conduc;

    thickness_conduc = ((thermal_conduc * area) * (temp2 - temp1)) / heat_transf_rate;
    return (thickness_conduc);
}
