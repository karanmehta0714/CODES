#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    scanf("%s", s.name);
    scanf("%d", &s.roll_no);
    scanf("%f", &s.marks);

    printf("%s\n", s.name);
    printf("%d\n", s.roll_no);
    printf("%.2f\n", s.marks);

    return 0;
}
