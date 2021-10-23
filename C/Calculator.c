#include <stdio.h>
int main()
{
    char input;
    printf("Enter an Operator (+,-,*,/)\n");
    scanf("%c", &input);
    printf("Enter two Operands : \n");
    double n1, n2;
    scanf("%lf %lf", &n1, &n2);

    switch (input)
    {
    case '+':
        printf("%0.1lf + %0.1lf = %0.1lf", n1, n2, (n1 + n2));
        break;

    case '-':
        printf("%0.1lf - %0.1lf = %0.1lf", n1, n2, (n1 - n2));
        break;

    case '*':
        printf("%0.1lf * %0.1lf = %0.1lf", n1, n2, (n1 * n2));
        break;

    case '/':
        printf("%0.1lf / %0.1lf= %0.1lf", n1, n2, (n1 / n2));
        break;

    default:
        printf("ERROR! Entered Operator is not Correct"); //if the input operator does not match with the available opeartor
        break;
    }

    return 0;
}