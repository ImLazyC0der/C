// 1. Take the input
// 2. Traverse the string
// 3. Scan for upper case and lower case letters
// 4. Change upper case to lower and lower to upper using ASCII values

#include<stdio.h>
#define MAX_SIZE 100

void toggleCase(char *str);

int main(){
    char str[MAX_SIZE];
    printf("Enter the string: ");
    scanf("%s",str);
    toggleCase(str);
    printf("Replaced string after toggling characters: ");
    printf("%s",str);
    return 0;
}

void toggleCase(char *str){
    while(*str){
        if(*str>='a' && *str<='z')
            *str = *str -32;
        else if(*str>='A' && *str<='Z')
            *str = *str +32;
        str++;
    }
}