#include <stdio.h>
int get_int(int n_min, int n_max);
int main(void)
{
    int k;

    k = get_int(10, 20);
    printf("Your integer is %i\n", k);
}
int get_int(int n_min, int n_max)
{
    int in_val, status, error;
    char skip_ch;

    do{
        error = 0;
        printf("Enter an integer in the range from %d ", n_min);
        printf("to %d inclusive.\n", n_max);
        status = scanf("%d", &in_val);
        if (status != 1)
        {
            error = 1;
            scanf("%c", &skip_ch);
            printf("Error! Invalid character >>%c>> \n", skip_ch);
            printf("Skipping the rest of the line...\n");
        }
        else if (in_val < n_min || in_val > n_max)
        {
            error = 1;
            printf("Number %d is outside range.\n", in_val);
        }
        do{
            scanf("%c", &skip_ch);
        }while(skip_ch != '\n');
    }while(error);
    return (in_val);
}