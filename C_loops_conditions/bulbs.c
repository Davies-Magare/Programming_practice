#include <stdio.h>

int main(void)
{
    int watts;
    int brightness;

    printf("Enter the wattage of your bulb> ");
    scanf("%i", &watts);

    switch(watts){
    case 15:
        brightness = 125;
        break;
    case 25:
        brightness = 215;
        break;
    case 40:
        brightness = 500;
        break;
    case 60:
        brightness = 880;
        break;
    case 75:
        brightness = 1000;
        break;
    case 100:
        brightness = 1675;
        break;
    default:
        brightness = -1;
    }
    printf("The expected %i watt bulb brightness is %i Lumens", watts, brightness);
}