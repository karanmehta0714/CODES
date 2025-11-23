#include <stdio.h>

int main() {
    enum Colors { RED, GREEN, BLUE, YELLOW, BLACK };

    const char *names[] = {
        "RED", "GREEN", "BLUE", "YELLOW", "BLACK"
    };

    for (int i = RED; i <= BLACK; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
