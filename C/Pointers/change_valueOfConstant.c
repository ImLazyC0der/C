// C program to change the value of constant integer using pointers 

#include<stdio.h>

int main(){
  const int a =10;
  int *p;
  p=&a;
  
  printf("Before changing the value of a: %d",a);
  
  *p=20;
  
  printf("\nValue changed...");
  printf("\nAfter changing the value of a: %d",a);
  return 0;
}
 
