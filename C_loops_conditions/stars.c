#include <stdio.h>

int main() {
    int i, j, l;
    
    for (i = 1; i <= 4; i++)
    {
        for (l = 0; l < 5 - i; l++)
            printf(" ");
        
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}