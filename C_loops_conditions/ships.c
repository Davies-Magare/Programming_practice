#include <stdio.h>

int main(void)
{
    char class; /*input - character indicating the class of the ship*/
    /* Read the first character of serial number */
    printf("Enter ship serial number> ");
    scanf("%c", &class);
    /* Display first character followed by ship class */
    printf("Ship class is %c: ", class);
    switch (class){
    
    case 'B':
    case 'b':
            printf("Battleship\n");
            break;
    case 'C':
    case 'c':
            printf("Cruiser\n");
            break;
    case 'D':
    case 'd':
            printf("Destroyer\n");
            break;
    case 'F':
    case 'f':
            printf("Frigate\n");
            break;
    default:
            printf("Unknown\n");
            break;      
    }
    return (0);
}