#include <stdio.h>
#define NUM_ROWS 3
#define NUM_COLS 3
typedef enum
{no_winner, x_wins, o_wins}
tac_t;
int check_rows(const char tic_tac[][3], int rows);
void display_winner(tac_t get_winner);
int main(void)
{
    char tic_tac[3][3] ={
        {'X', 'O', 'O'},
        {'O', 'X', 'X'},
        {'O', 'O', 'X'}
    };
    tac_t get_winner;
    int rows;

    get_winner = check_rows(tic_tac, 3);
    display_winner(get_winner);

    

}

int check_rows(const char tic_tac[][3], int rows)
{
    int row, col;
    int found_x, found_o;

    for (row = 0; row < rows; row++)
    {
        for (col = 0; col < 3; col++)
        {
            found_x = found_o = 1;
            if (tic_tac[row][0] == 'O')
            {
                    if (tic_tac[row][col + 1] != 'O' || tic_tac[row][col+2] != 'O')
                        found_o = 0;                
            }
            else if (tic_tac[row][0] == 'X')
            {
                if (tic_tac[row][col + 1] != 'X' || tic_tac[row][col + 2] != 'X')
                        found_x = 0;   
            }
        }
        printf("found_x: %i\n", found_x);
        printf("found_o: %i\n", found_o);
    }
    if (found_o)
        return (2);
    else if (found_x)
        return (1);
    else
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