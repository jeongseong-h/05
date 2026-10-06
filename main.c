#include <stdio.h>

int main(void)
{
    int num;
    int res = 0;
    int i;
    

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        res = res + i;
    }

    printf("Sum: %d\n",res);

   return 0;
}