#include <stdio.h>

int main() {
    int year_count,
    population, pop_incr;
    
    year_count = 0;
    for (population = 9870; 
    population <= 30000; 
    population += pop_incr)
    {
        pop_incr = 10/100.0 * population;
        year_count++;
    }
    printf("%i", year_count);
    return 0;
}