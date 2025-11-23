#include <stdio.h>

int main() {
    enum Role { ADMIN = 1, USER, GUEST };
    enum Role r;

    scanf("%d", &r);

    switch (r) {
        case ADMIN:
            printf("Welcome, Admin! Full access granted.\n");
            break;
        case USER:
            printf("Hello User! Limited access granted.\n");
            break;
        case GUEST:
            printf("Welcome Guest! View-only access.\n");
            break;
        default:
            printf("Invalid role.\n");
    }

    return 0;
}
