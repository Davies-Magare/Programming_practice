#include <stdio.h>
void letter_grade(int points, char *gradep, int *just_missedp, int *fail);
int main(void)
{
    int points, just_missed;
    int fail;
    char grade;

    printf("Enter the student's marks> ");
    scanf("%i", &points);
    letter_grade(points, &grade, &just_missed, &fail);
    printf("\nGrade: %c\n", grade);
    if (just_missed)
        printf("You missed just a point for the next grade!\n");
    if (fail)
        printf("You failed the class.\n");
}
void letter_grade(int points, char *gradep, int *just_missedp, int* fail)
{
    *just_missedp = *fail = 0;
    if (points >= 90)
        *gradep = 'A';
    else if (points >= 80)
    {
        if (points == 89)
            *just_missedp = 1;
        *gradep = 'B';
    }
    else if(points >= 70)
    {
        if (points == 79)
            *just_missedp = 1;
        *gradep = 'C';
    }
    else if (points >= 60)
    {
        if (points == 69)
            *just_missedp = 1;
        *gradep = 'D';
    }
    else
    {
        *gradep = 'F';
        *fail = 1;
    }
}