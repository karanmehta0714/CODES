#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];
    int i;
    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's complement: ");
    for(i = 0; i < strlen(binary); i++) {
        if(binary[i] == '0')
            printf("1");
        else if(binary[i] == '1')
            printf("0");
        else {
            printf("\nInvalid binary number.\n");
            return 0;
        }
    }
    printf("\n");

    return 0;
}
