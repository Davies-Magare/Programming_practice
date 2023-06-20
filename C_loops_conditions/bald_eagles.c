#include <stdio.h>
#define NUM_MONTHS 12
#define SENTINEL 0
int main(void)
{
    int month, sightings, mem_sight;
    printf("BALD EAGLE SIGHTINGS\n");
    for (month = 1; month <= NUM_MONTHS; month++)
    {
        sightings = 0;
        printf("Enter first member sighting> ");
        scanf("%i", &mem_sight);
        while(mem_sight != SENTINEL)
        {
            if (mem_sight >= 0)
                sightings += mem_sight;
            else
                printf("Error! Negative count %i ignored.\n", mem_sight);
            printf("Enter next member sighting> ");
            scanf("%d", &mem_sight);
        }
        printf("month %2d: %2d\n", month, sightings);
    }
    return (0);

}