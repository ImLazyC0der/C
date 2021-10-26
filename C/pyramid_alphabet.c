#include <stdio.h>

int main (void) {
  int input, space, i;
  printf("Enter the maximum number of letters (number of pyramid layers): ");
  scanf("%d", &input);
  space=input*2, i=input;
  while (i>0 && i<=26) {
    int j;
    for (int spacerun=space; spacerun>=3; spacerun--) {
      printf(" ");
    }
    for (j=0; j<=input-i; j++)
      printf("%c ", 65+j);
    if (i!=input)
      for (j=j-2; j>=0; j--)
        printf("%c ", 65+j);

    printf("\n");
    space-=2;
    i--;
  }
}
