/**
 * C program to demonstrate input output using scanf() and print()
 */

#include <stdio.h>

int main()
{
    int num1, num2, sum;
    
    /* Simple message to user */
    printf("Enter two numbers: ");

    /* Input value in two variables */
    scanf("%d%d", &num1, &num2);

    /* Find sum */
    sum = num1 + num2;

    /* Print sum */
    printf("Sum = %d", sum);

    return 0;
}
