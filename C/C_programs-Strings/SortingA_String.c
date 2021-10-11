/*Sorting a string in alphabetical order by swapping the characters in the string*/

#include<stdio.h>
int main(){
    char string[100];
    printf("\nEnter the string: ");
    scanf("%s",string);
    char temp;
    int i,j;
    int n=strlen(string);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(string[i]>string[j]){
                temp=string[i];
                string[i]=string[j];
                string[j]=temp;
            }
        }
    }
    printf("Sorted string: %s",string);
}
