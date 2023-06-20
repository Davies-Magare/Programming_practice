#include <stdio.h>
int main(void)
{
    int age, senior_citizen;
    char name[30], sex;
    
    do{
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Enter your age: ");
        scanf("%i", &age);
        printf("Enter your gender (M / F): ");
        scanf(" %c", &sex);
        senior_citizen = (age >= 65);
        if (senior_citizen && sex == 'F')
            printf("%s\n", name);
        else
            printf("You're not a senior citizen\n");
    }while(senior_citizen);
    return (0);
}