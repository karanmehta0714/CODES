#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, idx = 0;

    for (i = 0; i < 5; i++)
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

    for (i = 1; i < 5; i++)
        if (s[i].marks > s[idx].marks)
            idx = i;

    printf("%s %d %.2f\n", s[idx].name, s[idx].roll_no, s[idx].marks);

    return 0;
}
