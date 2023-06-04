#include <stdio.h>
#define NUM_CLASS_DAYS 5
typedef enum{
    monday, tuesday, wednesday, thursday, friday
}weekday_t;
// int main(void)
// {
//     int score[NUM_CLASS_DAYS];
//     int a_score;
//     weekday_t today;

//     a_score = 9;
//     for (today = monday; today <= friday; today++)
//     {
//         score[today] = a_score;
//         a_score -= 2;
//     }
//     for (today = monday; today <= friday; today++)
//         printf("%i ", score[today]);
// }

int main(void)
{
    weekday_t tomorrow, day_after;

    tomorrow = monday + tuesday;
    day_after = tomorrow + 3;

    printf("%i ", tomorrow);
    printf("%i ", day_after);
}