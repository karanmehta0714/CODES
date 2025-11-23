#include <stdio.h>

int main() {
    enum Traffic { RED, YELLOW, GREEN };
    enum Traffic signal;

    scanf("%d", &signal);

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else if (signal == GREEN)
        printf("Go\n");
    else
        printf("Invalid input\n");

    return 0;
}
