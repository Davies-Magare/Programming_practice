#include <stdio.h>

int main(void)
{
    int count;
    int next_num;
    int sum;

    count = 0;
    sum = 0;
    while (count < 5)
    {
        count += 1;
        printf("Next number > ");
        scanf("%d", &next_num);
        sum += next_num;
    }
    printf("%d numbers were added\n", count);
    printf("Their sum is %d\n", sum);
}