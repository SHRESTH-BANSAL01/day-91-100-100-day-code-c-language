//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
#include <string.h>

// Define struct
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1;          // Declare struct variable
    struct Student *ptr;        // Declare pointer to struct

    ptr = &s1;                  // Point to s1

    // Modify values using -> operator
    strcpy(ptr->name, "John");
    ptr->roll = 106;
    ptr->marks = 91;

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}