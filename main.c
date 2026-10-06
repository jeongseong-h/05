#include <stdio.h>

int main(void)
{
    int answer = 65;
    int trial = 0;
    int num;

    do
    {
        printf("Guess a number: ");
        scanf("%d", &num);

        if (num < answer)
            printf("low..\n");
        else if (num > answer)
            printf("high..\n");

        trial++;

    } while (num != answer);

    printf("Congratulations! Trials: %d\n", trial);

    return 0;
}