#include <stdio.h>
#define NUM_ROWS 3
#define NUM_COLS 3
#define DEBUG 1
typedef enum
{no_winner, x_wins, o_wins}
tac_t;
int check_x_row(char tic_tac[][3], int rows);
int check_x_col(char tic_tac[][3], int rows);
void display_winner(tac_t get_winner);
int check_x_diag(char tic_tac[][3], int rows);
int check_o_row(char tic_tac[][3], int rows);
int check_o_col(char tic_tac[][3], int rows);
int check_o_diag(char tic_tac[][3], int rows);

int main(void)
{
    char tic_tac[3][3] ={
        {'X', 'O', 'X'},
        {'O', 'X', 'O'},
        {'O', 'X', 'O'}
    };
    tac_t get_winner;
    int rows, i;
    rows = 3;

    get_winner = no_winner;

    get_winner = check_x_row(tic_tac, rows);
    if (!get_winner)
    {
        get_winner = check_x_col(tic_tac, rows);
        printf("%i\n", get_winner);
    }
    if (!get_winner)
    {
        get_winner = check_x_diag(tic_tac, rows);
        printf("%i\n", get_winner);
    }
    if (!get_winner)
    {
        get_winner = check_o_row(tic_tac, rows);
        printf("%i\n", get_winner);
    }
    if (!get_winner)
    {
        get_winner = check_o_col(tic_tac, rows);
        printf("%i\n", get_winner);
    }
    if (!get_winner)
    {
        get_winner = check_o_diag(tic_tac, rows);
        printf("%i\n", get_winner);
    }
    display_winner(get_winner);
    return (0);
    

}
int check_x_row(char tic_tac[][3], int rows)
{
    int col, row;
    int found_x;

    for (row = 0; row < rows; row++)
    {
        found_x = 1;
        for (col = 0; found_x && col < NUM_COLS; col++)
        {
            if (tic_tac[row][col] != 'X')
                found_x = 0;
        }
        if (found_x)
            return (1);
    }
    return (0);
}
int check_x_col(char tic_tac[][3], int rows)
{
    int col, row;
    int found_x;

    for (col = 0; col < NUM_COLS; col++)
    {
        found_x = 1;
        for (row = 0; found_x && row < rows; row++)
        {
            if (tic_tac[row][col] != 'X')
                found_x = 0;
        }
        if (found_x)
            return (1);
    }
    return (0);
}
int check_x_diag(char tic_tac[][3], int rows)
{
    int row, pos, found_x;

    pos = 0;
    found_x = 1;
    for (row = 0; row < rows && found_x; row++)
    {
        if (tic_tac[row][pos] != 'X')
            found_x = 0;
        pos += 1;
    }
    if (found_x)
        return (1);
    pos = 2;
    found_x = 1;
    for (row = 0; row < rows && found_x; row++)
    {
        if (tic_tac[row][pos] != 'X')
            found_x = 0;
        pos -= 1;
    }
    if (found_x)
        return (1);
    return (found_x);
}

int check_o_row(char tic_tac[][3], int rows)
{
    int col, row;
    int found_o;

    for (row = 0; row < rows; row++)
    {
        found_o = 1;
        for (col = 0; found_o && col < 3; col++)
        {
            if (tic_tac[row][col] != 'O')
                found_o = 0;
        }
        if (found_o)
            return (2);
    }
    return (0);
}
int check_o_col(char tic_tac[][3], int rows)
{
    int col, row;
    int found_o;

    for (col = 0; col < NUM_COLS; col++)
    {
        found_o = 1;
        for (row = 0; found_o && row < rows; row++)
        {
            if (tic_tac[row][col] != 'O')
                found_o = 0;
        }
        if (found_o)
            return (2);
    }
    return (0);
}
int check_o_diag(char tic_tac[][3], int rows)
{
    int row, pos, found_o;

    pos = 0;
    found_o = 1;
    for (row = 0; row < rows && found_o; row++)
    {
        if (tic_tac[row][pos] != 'O')
            found_o = 0;
        pos += 1;
    }
    if (found_o)
        return (2);
    pos = 2;
    found_o = 1;
    for (row = 0; row < rows && found_o; row++)
    {
        if (tic_tac[row][pos] != 'O')
            found_o = 0;
        pos -= 1;
    }
    if (found_o)
        return (2);
    return (0);
}

void display_winner(tac_t get_winner)
{
    switch(get_winner){
        case 0:
            printf("No winner\n");
            break;
        case 1:
            printf("X wins\n");
            break;
        case 2:
            printf("O wins\n");            
            break;
    }
}