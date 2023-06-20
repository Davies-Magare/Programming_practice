#include <stdio.h>

int main(void)
{
    char colour;

    printf("Enter the colour of your cylinder\n");
    scanf("%c", &colour);

    switch(colour){
        case 'O':
        case 'o':
                printf("The cylinder is filled with ammonia.");
                break;
        case 'B':
        case 'b':
                printf("The cylinder is filled with carbon monoxide.");
                break;
        case 'Y':
        case 'y':
                printf("The cylinder is filled with hydrogen.");
                break;
        case 'G':
        case 'g':
                printf("The cylinder is filled with oxygen.");
                break;
        default:
                printf("The contents of the cylinder are unknown.");
    }
    return (0);
}