#include <stdio.h>

// int main(void)
// {

// }
// int filled(char ttt_bd[3][3])
// {
//     int r, c, ans;

//     ans = 1; // assume whole 2d array (board) is filled

//     for (r = 0; r < 3; r++)
//     {
//         for (c = 0; c < 3; c++)
//             if (ttt_bd[r][c] == ' ')
//                 ans = 0;
//     }
//     return (ans);

// }
void print_array(int (*array)[4], int size);
int main(void)
{
    int array[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int size;

    size = 4;
    print_array(array, size);
}
void print_array(int (*array)[4], int size)
{
    int rows, cols;

    for (rows = 0; rows < size; rows++)
    {
        for (cols = 0; cols < 4; cols++)
        {
            printf("%3i ", array[rows][cols]);
        }
        printf("\n");
    }
}