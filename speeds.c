#include <stdio.h>
#define SENTINEL -99
int main(void)
{
    int high_speed, medium_speed, low_speed;
    int speed;

    high_speed = medium_speed = low_speed = 0;
    printf("Enter a speed value> ");
    scanf("%i", &speed);
    while(speed != SENTINEL)
    {
        if (speed >= 90)
        {
            high_speed++;
            printf("The vehicle is on high speed.\n");
        }
        else if (speed >= 50)
        {
            medium_speed++;
            printf("The vehicle is on medium speed.\n");
        }
        else
        {
            low_speed++;
            printf("The vehicle is on low speed.\n");
        }
        printf("Enter the next speed value (-99 to exit)> ");
        scanf("%i", &speed);
    }
    printf("%i vehicles are going at high speed\n", high_speed);
    printf("%i vehicles are going at medium speed\n", medium_speed);
    printf("%i vehicles are going at low speed\n", low_speed);
    return (0);

}