/**
 * C program to demonstrate character input output 
 * using getchar() and putchar() function.
 */

#include <stdio.h>

int main()
{
    char grade;
    printf("Enter student grade: ");

    /* Input character using getchar() and store in grade */
    grade = getchar();

    /* Output grade using putchar() */
    putchar(grade);

    return 0;
}
