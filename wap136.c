#include <stdio.h>

int main() {
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
    int choice, a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
