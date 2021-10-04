
#include<stdio.h>
int check_vowel(char);
int main(){
    char input_string[100],non_vowel_string[100];
    int c,d=0;
    printf("Enter input string: ")
    gets(input_string);
    for(c=0;input_string[c]!='\0';c++){
        if(check_vowel(input_string[c])==0){
            non_vowel_string[d]=input_string[c];
            d++;
        }
    }
    non_vowel_string[d]='\0';
    printf("%s\n",non_vowel_string);
    return 0;
}
int check_vowel(char ch){
    if(ch=='a' || ch=='A' ||ch=='e' || ch=='E' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U'||ch=='u')
        return 1;
    else
        return 0;
    }
