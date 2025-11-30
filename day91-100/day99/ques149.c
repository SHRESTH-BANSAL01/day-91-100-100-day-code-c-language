//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));

    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%d", &s->marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);

    free(s);
    return 0;
}