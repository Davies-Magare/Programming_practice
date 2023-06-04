#include <stdio.h>

int main(void)
{
    int i, j;

    printf("                 i  j\n");
    for (i = 0; i < 4; i++)
    {
        printf("Outer loop: %6d\n", i);
        for (j = 0; j < i; j++)
        {
            printf("Inner loop: %9d\n", j);
        }
    }
}