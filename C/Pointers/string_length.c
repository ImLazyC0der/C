// C program to find length of a string using pointer

#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the string

int main()
{
    char text[MAX_SIZE]; /* Declares a string of size 100 */
    char * str = text; /* Declare pointer that points to text */
    int count = 0;

    /* Input string from user */
    printf("Enter any string: ");
    gets(text);

    /* Iterate though last element of the string */
    while(*(str++) != '\0') count++;

    printf("Length of '%s' = %d", text, count);

    return 0;
}
