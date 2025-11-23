#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("%s %d %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);

    printStudent(s);

    return 0;
}
