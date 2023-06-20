#include <stdio.h>
#define NUM_COLS 4
#define NUM_ROWS 5
void initialize(double revenue[][4], double fill);
typedef enum
{dog, cat, zebra, horse, pig}
anim_t;
int main(void)
{
    double revenue[5][4];
    double fill;
    int rows, cols;

    fill = 75.5;
    initialize(revenue, fill);

    for (rows = 0; rows < NUM_ROWS; rows++)
    {
        for (cols = 0; cols < NUM_COLS; cols++)
            printf("%.1f ", revenue[rows][cols]);
        printf("\n");
    }
    
}
void initialize(double revenue[][4], double fill)
{
    int rows, columns;

    for (rows = 0; rows < NUM_ROWS; rows++)
    {
        for (columns = 0; columns < NUM_COLS; columns++)
        {
            revenue[rows][columns] = fill;
        }
    }
}