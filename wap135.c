#include <stdio.h>

int main() {
    enum Codes {
        A = 10,
        B = 20,
        C = 30,
        D = 40
    };

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
