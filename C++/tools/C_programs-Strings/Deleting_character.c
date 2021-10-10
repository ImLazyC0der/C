#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char str[100],ch;
    char chr;
    int i,j;

    printf("\nEnter a string: ");
    gets(str);

    printf("\nEnter a character to delete from string: ");
    scanf("%c",&ch);

    for(i=0;i<strlen(str);i++){
        if(ch==str[i]){
            for(j=i;j<strlen(str);j++){
                str[j]=str[j+1];
            }
        }
    }
    printf("\nString after deleting character:\n");
    puts(str);

    getch();
}
