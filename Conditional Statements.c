# C_Program
/****************************************
 * C Program to find the student's grade
*****************************************/

#include<stdio.h> // include stdio.h 
int main() 
{
    float marks;
    char grade;
    printf("Enter marks: ");      //Output Function.
    scanf("%f", &marks);          //Input Function.
    
    if(marks == 100)              // If - Else Conditional Statements
    {
        grade = 'S';
    }
    else if(marks >= 85 && marks < 100)
    {
        grade = 'A';
    }
    else if(marks >= 70 && marks <= 84)
    {
        grade = 'B';
    }
    else if(marks >= 55 && marks <= 69)
    {
        grade = 'C';
    }
    else if(marks >= 40 && marks <= 54)
    {
        grade = 'D';
    }
    else 
    {
        grade = 'F';
    }                
    
    printf("Your grade is %c", grade);
    return 0;
}
