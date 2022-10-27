#include<stdio.h>
int main()
{
    float length,breadth,area;
     
    printf("enter length of rectangle: ");
    scanf("%f",&length);
     
     
    printf("enter breadth of rectangle: ");
    scanf("%f",&breadth);
  
    area=(length*breadth);
    printf("Area of Rectangle: %f\n",area);
    return 0;
}
