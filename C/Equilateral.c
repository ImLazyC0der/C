#include<stdio.h>
#include<math.h>
int main()
{
   int triangle_side;
   float triangle_area, temp_variable;
   printf("\nEnter the Side of the triangle:");
   scanf("%d",&triangle_side);
   temp_variable = sqrt(3) / 4 ;
   triangle_area = temp_variable * triangle_side * triangle_side ;
   printf("\nArea of Equilateral Triangle is: %f",triangle_area);
   return(0);
}
