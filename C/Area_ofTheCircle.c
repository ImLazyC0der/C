#include <stdio.h>

#define PI 3.14159 // <-- Define constant PI

int main()
{
    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area = %f", area);

    return 0;
}
