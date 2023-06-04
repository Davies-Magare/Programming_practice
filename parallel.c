// #include <stdio.h>
// #define SIZE 5
// int main(void)
// {
//     double rate[SIZE], hours[SIZE], salary;
//     int i;

//     printf("Enter the number of hours and the rate >> ");
//     for (i = 0; i < SIZE; i++)
//         scanf("%lf%lf", &hours[i], &rate[i]);
//     for (i = 0; i < SIZE; i++)
//     {
//         salary = rate[i] * hours[i];
//         printf("Employee: %i\n", i + 1);
//         printf("Hours: %.2f\n", hours[i]);
//         printf("Rate: %.2f\n", rate[i]);
//         printf("Salary: %.2f\n", salary);
//     }

// }

// typedef enum{
//     january = 1, february, march, april, may, june, july, august,
//     september, october, november, december
// }month_t;
// void season_message(month_t month);
// int main(void)
// {
//     month_t cur_month;
//      printf("Enter the current month >> ");
//      scanf("%i", &cur_month);
//      season_message(cur_month);
// }
// void season_message(month_t month)
// {
//     switch(month){
//         case january:
//             printf("Happy new year!\n");
//             break;
//         case june:
//             printf("Summer begins\n");
//             break;
//         case september:
//             printf("Back to school\n");
//             printf("Happy birthday Davies! ;)\n");
//             break;
//         case december:
//             printf("Merry merry christmas!\n");
//             break;
//         default:
//             printf("The holidays are not with us yet\n");
//             break;
//     }
// }

// typedef enum{
//     sunday = 1, monday, tuesday, wednesday, thursday, friday, saturday
// }day_t;
// void print_day(day_t day);
// int main(void)
// {
//     day_t day;
//     int status, error;
//     char discard;

//     printf("This program tells you the name of the day \n");
//     printf("in Spanish based on the number you enter. The \n");
//     printf("number must be a valid value (see instructions)\n");
//     do{
//         error = 0;
//         printf("Enter the day (1-7) >> ");
//         status = scanf("%i", &day);
//         if (status != 1)
//         {
//             printf("Invalid input format\n");
//             error = 1;
//             do{
//                 scanf("%c", &discard);
//             }while (discard != '\n');
//         }
        
//         else if (day < 1 || day > 7)
//         {
//             error = 1;
//             printf("Invalid input\n");
//         }
//     }while(error);
//     print_day(day);
// }
// void print_day(day_t day)
// {
//     switch(day){
//         case sunday:
//             printf("Hoy es domingo.\n");
//             break;
//         case monday:
//             printf("Hoy es lunes.\n");
//             break;
//         case tuesday:
//             printf("Hoy es martes.\n");
//             break;
//         case wednesday:
//             printf("Hoy es miercoles.\n");
//             break;
//         case thursday:
//             printf("Hoy es jueves.\n");
//             break;
//         case friday:
//             printf("Hoy es viernes.\n");
//             break;
//         case saturday:
//             printf("Hoy es sabado.\n");
//             break;
//     }
// }