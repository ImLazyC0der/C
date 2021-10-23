
#include <stdio.h> 
#include <string.h> 

  
// Function to reverse the string 
// using pointers 

void reverseString(char* str) 
{ 

    int l, i; 

    char *begin_ptr, *end_ptr, ch; 

  

    // Get the length of the string 

    l = strlen(str); 

  

    // Set the begin_ptr and end_ptr 

    // initially to start of string 

    begin_ptr = str; 

    end_ptr = str; 

  

    // Move the end_ptr to the last character 

    for (i = 0; i < l - 1; i++) 

        end_ptr++; 

  

    // Swap the char from start and end 

    // index using begin_ptr and end_ptr 

    for (i = 0; i < l / 2; i++) { 

  

        // swap character 

        ch = *end_ptr; 

        *end_ptr = *begin_ptr; 

        *begin_ptr = ch; 

  

        // update pointers positions 

        begin_ptr++; 

        end_ptr--; 

    } 
} 

  
// Driver code 

int main() 
{ 

  

    // Get the string 

    char str[100] = "GeeksForGeeks"; 

    printf("Enter a string: %s\n", str); 

  

    // Reverse the string 

    reverseString(str); 

  

    // Print the result 

    printf("Reverse of the string: %s\n", str); 

  

    return 0; 
} 
