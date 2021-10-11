/*C program to read and print student details using structure pointer, 
demonstrate example of structure with pointer.*/

#include <stdio.h>
 
struct student{
    char    name[30];
    int     roll;
    float   perc;
};

int main()
{
    struct student  std;        //structure variable
    struct student  *ptr;       //pointer to student structure
     
    ptr= &std;                  //assigning value of structure variable
     
    printf("Enter details of student: ");
    printf("\nName ?:");        gets(ptr->name);
    printf("Roll No ?:");       scanf("%d",&ptr->roll);
    printf("Percentage ?:");    scanf("%f",&ptr->perc);
     
    printf("\nEntered details: ");
    printf("\nName:%s \nRollNo: %d \nPercentage: %.02f\n",ptr->name,ptr->roll,ptr->perc);

    return 0;
}
