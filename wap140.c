#include <stdio.h>

int main() {
    enum Gender { MALE, FEMALE, OTHER };

    struct Person {
        char name[50];
        enum Gender gender;
    };

    struct Person p;

    scanf("%s", p.name);
    scanf("%d", (int*)&p.gender);

    printf("Name: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male\n");
    else if (p.gender == FEMALE)
        printf("Gender: Female\n");
    else if (p.gender == OTHER)
        printf("Gender: Other\n");
    else
        printf("Invalid Gender\n");

    return 0;
}
