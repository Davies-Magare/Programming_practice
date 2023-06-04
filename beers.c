#include <stdio.h>

int main(void)
{
    int piels, coors, iron_city, bud,
    days, sold;

    printf("Enter the number of Piels beer cases remaining> ");
    scanf("%i", &piels);
    printf("Enter the number of Coors beer cases remaining> ");
    scanf("%i", &coors);
    printf("Enter the number of Iron City beer cases remaining> ");
    scanf("%i", &iron_city);
    printf("Enter the number of bud beer cases remaining> ");
    scanf("%i", &bud);

    for (days = 1; days <= 7; days++)
    {
        printf("Day: %i\n", days);
        printf("How many Piels beer crates have been sold today?> ");
        scanf("%i", &sold);
        piels -= sold;
        printf("How many Coors beer crates have been sold today?> ");
        scanf("%i", &sold);
        coors -= sold;
        printf("How many Iron City beer crates have been sold today?> ");
        scanf("%i", &sold);
        iron_city -= sold;
        printf("How many Bud beer crates have been sold today?> ");
        scanf("%i", &sold);
        bud -= sold;
        printf("This is the beer inventory as for today:\n"); 
        printf("Piels: %i\n", piels);
        printf("Coors: %i\nIron City: %i\nBud %i\n", coors, iron_city, bud);
        printf("\n");
    }
    printf("This is what we have in store at the end of the week: \n");
    printf("Piels: %i\n Coors: %i\n Iron City: %i\n Bud: %i\n", piels, coors, iron_city, bud); 
}
