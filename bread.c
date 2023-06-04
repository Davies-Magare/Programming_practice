#include <stdio.h>
void instructions(void);
double calculate_baking_time(int baking_time);
void bake_white_bread(char bread_type, int double_size, int manual_baking);
void bake_sweet_bread(char bread_type, int double_size, int manual_baking);
int main(void)
{
    char bread_type;
    int double_size;
    int manual_baking;
    int error;

    instructions();
    do{
        printf("Input 'W' for white bread and 'S' for sweet bread> ");
        scanf("%c", &bread_type);
        if (bread_type == 'W' || bread_type == 'S')
            error = 0;
        else
        {
            error = 1;
            printf("Invalid character. Please try again!\n");
            while(getchar() != '\n'){}
        }
    }while(error);
    do{
        printf("Do you wish to bake double size bread?\n");
        printf("Enter '1' if yes and '0' if otherwise> ");
        scanf("%i", &double_size);
        if (double_size == 1 || double_size == 0)
            error = 0;
        else
        {
            error = 1;
            printf("Invalid input. Please try again.\n");
        }
    }while(error);
    do{
        printf("Do you wish to bake the bread manually?\n");
        printf("Enter '1' if yes; enter '0' if otherwise> ");
        scanf("%i", &manual_baking);
        if (manual_baking == 1 || manual_baking == 0)
            error = 0;
        else
        {
            error = 1;
            printf("Invalid input. Please try again.\n");
        }
    }while (error);
    printf("\n");
    if (bread_type == 'W')
        bake_white_bread(bread_type, double_size, manual_baking);
    else
        bake_sweet_bread(bread_type, double_size, manual_baking);
    
    return (0);

}
void instructions(void)
{
    printf("This program displays machine operation time for \n");
    printf("making two types of bread: white bread and sweet bread.\n");
    printf("Enter one of the characters as instructed by the prompt.\n");
    printf("No other character is allowed; if any is entered, the program \n");
    printf("will display an error message and the user will be \n");
    printf("prompted to enter the details again.\n");

}
double calculate_baking_time(int baking_time)
{
    return (1.5 * baking_time);
}
void bake_white_bread(char bread_type, int double_size, int manual_baking)
{
    printf("These are the instructions to bake white bread with this machine.\n");
    printf("Primary Kneading takes 15 minutes.\n");
    printf("Primary rising takes 60 minutes(1 hour).\n");
    printf("Secondary kneading takes 18 minutes.\n");
    printf("Secondary rising takes 20 minutes.\n");
    printf("Loaf shaping takes 2 seconds.\n");
    if (manual_baking)
        printf("Remove the bread for manual baking.\n");
    else    
    {
        printf("Final rising takes 75 minutes.\n");
        if (double_size)
            printf("Baking double bread takes %.1f minutes.\n", calculate_baking_time(45));
        else
            printf("Baking takes 45 minutes.\n");
        printf("Cooling takes 30 minutes.\n");

    }
}
void bake_sweet_bread(char bread_type, int double_size, int manual_baking)
{
    printf("These are the instructions to bake sweet bread with this machine.\n");
    printf("Primary Kneading takes 20 minutes.\n");
    printf("Primary rising takes 60 minutes(1 hour).\n");
    printf("Secondary kneading takes 33 minutes.\n");
    printf("Secondary rising takes 30 minutes.\n");
    printf("Loaf shaping takes 2 seconds.\n");
    if (manual_baking)
        printf("Remove the bread for manual baking\n");
    else    
    {
        printf("Final rising takes 75 minutes.\n");
        if (double_size)
            printf("Baking double bread takes %.1f minutes.\n", calculate_baking_time(35));
        else
            printf("Baking takes 45 minutes.\n");
        printf("Cooling takes 30 minutes.\n");

    }
}