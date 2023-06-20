#include <stdio.h>
#include <stdlib.h>
int *allocate_memory(int ***array, int rows, int cols);
void initialize_array(int **array, int rows, int cols, int init_val);
void print_array(int **array, int rows, int cols);
int main(void)
{
    int **array;
    int rows;
    int cols;
    int **arr;
    int init_val;

    rows = cols = 4;
    init_val = 79;
    arr = allocate_memory(&array, rows, cols);
    initialize_array(arr, rows, cols, init_val);
    

    
}
int *allocate_memory(int ***array, int rows, int cols)
{
    int i;

    *array = malloc(rows * sizeof(int *));
    if (*array != NULL)
    {
        for (i = 0; i < rows; i++)
        {
            (*array)[i] = malloc(sizeof(int) * cols);
            if ((*array)[i] == NULL)
                return (1);
        }
    }
    return *array;
}
void initialize_array(int **array, int rows, int cols, int init_val)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            array[i][j] = init_val;
        }
    }
}
void print_array(int **array, int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%3i ", array[i][j]);
        }
        printf("\n");
    }
}