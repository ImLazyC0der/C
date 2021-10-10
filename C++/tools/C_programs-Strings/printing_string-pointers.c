// C program to print a string using pointers.

#include<stdio.h>

int main(){
    char ptr[100];
    char *ptr;
    
    printf("Enter a string: ");
    gets(str);
    
    //Assigning address of string to pointer
    ptr = str;
    
    printf("Entered string is: ");
    while(*ptr!='\0')
        printf("%c",*ptr++);
    return 0;
}
