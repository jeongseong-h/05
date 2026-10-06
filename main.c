#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    char op;

    printf("Enter equation: ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch(op){
        case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;

        case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;

        case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
        
        case '/':
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
        

    }

    return 0;
}