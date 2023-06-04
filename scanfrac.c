#include <stdio.h>
#define DEBUG 1
void scan_fraction(int *nump, int *denomp);
int main(void)
{
    int num, denom;
    scan_fraction(&num, &denom);
}
void scan_fraction(int *nump, int *denomp)
{
    char slash, discard;
    int error, status;

    
    do{
        error = 0;
        printf("Enter your denominator backslash(/) and denominator> ");
        status = scanf("%i %c%i", nump, &slash, denomp);
        if (status < 3) /*Monitor the return value of scanf*/
        {
            error = 1;
            printf("Please read the prompt and try again.\n");
        }
        else if (slash != '/')
        {
            error = 1;
            printf("Only a backslash can be used as a seperator.\n");
        }
        else if (*denomp <= 0)
        {
            error = 1;
            printf("Denominators of zero or less are invalid.\n");
        }
        do{
            scanf("%c", &discard);
        }while(discard != '\n');
        if (DEBUG)
            printf("%i\n", discard);

    }while (error);
    printf("Your fraction is %i%c%i\n", *nump, slash, *denomp);
}