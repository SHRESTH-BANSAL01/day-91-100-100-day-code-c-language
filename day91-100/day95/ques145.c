//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopper(struct Student students[], int n) {
    int i, topperIndex = 0;
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }
    return students[topperIndex];
}

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks of student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    struct Student topper = findTopper(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll_no, topper.marks);

    return 0;
}