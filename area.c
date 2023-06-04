#include <stdio.h>
#define pi 3.141592654
int main(void)
{
    char choice, status;
    float area, radius, side, correct;

    do{
        do{
            printf("To calculate the area of a circle enter the character 'C':\n");
            printf("To calculate the area of a square enter the character 'S'\n");
            scanf(" %c", &choice);
            if (choice == 'C' || choice == 'S')
            {
                correct = 1;
            }
            else
            {
                correct = 0;
                printf("Error! Enter a valid character\n");
            }
        }while(!(correct));
        if (choice == 'C')
        {
            do{
                printf("Enter the radius of the circle> ");
                scanf("%f", &radius);
            }while(radius <= 0);
            area = pi * radius * radius;
            printf("The area of the circle of radius %.4f is %.4f\n", radius, area);
        }
        if (choice == 'S')
        {
            do{
                printf("Enter the length of one side of the square: ");
                scanf("%f", &side);
            }while(side <= 0);
            area = side * side;
            printf("The area of a square of side length %f is %.4f\n", side, area);
        }
        printf("Enter 'y' to continue or 'x' to exit the program\n");
        scanf (" %c", &status);
    }while(status == 'y');
    printf("Bye, see you soon!;)");
    return (0);
}
    
