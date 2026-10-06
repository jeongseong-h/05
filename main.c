#include <stdio.h>

int main(void)
{
    int c;
    int count = 0;

    printf("Enter a string: ");

    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
            count = count + 1;
    }

    printf("There are %d digits.\n", count);

    return 0;
}