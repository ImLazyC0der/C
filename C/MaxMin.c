#include<stdio.h>
int main()
{
    int a, b, max, min, ch;
    printf("Enter two nos: \n");
    scanf("%d%d", &a, &b);
    printf("Enter 1 to print the maximum number or Enter 2 to print the minimum number: \n");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1: if(a>b)
                {
                    max=a;
                }
                else{
                    max=b;
                }
                printf("the maxmimum between the two given no is %d", max);
                break;

        case 2: if(a<b)
                {
                    min=a;
                }
                else{
                    min=b;
                }
                printf("the minimum between the two given no is %d", min);
                break;
        default: ("wrong choice");
    }
    return 0;
}
