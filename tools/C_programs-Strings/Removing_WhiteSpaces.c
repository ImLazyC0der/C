#include<stdio.h>

char *remove_white_spaces(char *str){
    int i=0,j=0;
    while(str[i]){
        if(str[i] !=' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    return str;
}

int main(){
    char str[50];
    printf("\n\t Enter a string: ");
    gets(str);
    remove_white_spaces(str);
    printf("%s",str);
    return 0;
}
