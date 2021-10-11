/* Read the string
Assign address of the string to the character pointer
Increment the pointer when the character is a vowel */

#include<stdio.h>
int main(){
    char str[100];
    char *ptr;
    int count_vowel, count_consont;
    printf("Enter a string: ");
    gets(str);
    ptr=str;
    count_vowel=count_consont=0;
    while(*ptr!='\0'){
        if(*ptr=='A' || *ptr=='E' || *ptr=='I'||*ptr=='i'||*ptr=='O'||*ptr=='e'||*ptr=='o'||*ptr=='u' ||*ptr=='a'||*ptr=='U'){
            count_vowel++;
        }
        else{
            count_consont++;
        }
        ptr++;
   }
   printf("Total number of vowels: %d\nTotal number of consonant: %d\n",count_vowel,count_consont);
}
