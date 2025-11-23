#include <stdio.h>

int main() {
    char date[20];
    int dd, yyyy;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d/04/%d", &dd, &yyyy);

    printf("%02d-Apr-%d\n", dd, yyyy);

    return 0;
}
