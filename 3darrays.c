#include <stdio.h>
#define MAXCRS 5
int main(void)
{
    int year, campuses, courses;
    int sum_year;

    year = 4;
    campuses = 5;
    courses = MAXCRS;

    int enroll[courses][campuses][year];

    for (courses = 0; courses < MAXCRS; courses++)
    {
        for (campuses = 0; campuses < 5; campuses++)
        {
            for (year = 0; year < 4; year++)
                enroll[courses][campuses][year] = 79;
        }
    }
    for (courses = 0; courses < MAXCRS; courses++)
    {
        for (campuses = 0; campuses < 5; campuses++)
        {
            for (year = 0; year < 4; year++)
                printf("%i ", enroll[courses][campuses][year]);
            printf("\n");
        }
        printf("\n");
    }
    for (year = 0; year < 4; year++)
    {
        sum_year = 0;
        for (campuses = 0; campuses < 5; campuses++)
        {
            for (courses = 0; courses <5; courses++)
                sum_year += enroll[year][campuses][courses];
        }
        printf("Year: %i\n", year);
        printf("Students: %i\n", sum_year);
    }

}