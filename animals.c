#include <stdio.h>
typedef enum
{dog, cat, zebra, horse, pig}
anim_t;
void display_animal(anim_t animal);
int main(void)
{
    anim_t animal;

    for (animal = dog; animal <= pig; animal++)
        display_animal(animal);
}
void display_animal(anim_t animal)
{
    switch(animal){
        case dog:
            printf("dog ");
            break;
        case cat:
            printf("cat ");
            break;
        case zebra:
            printf("zebra ");
            break;
        case horse:
            printf("horse ");
            break;
        case pig:
            printf("pig\n");
            break;
    }

}