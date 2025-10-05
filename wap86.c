#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length of string
    while(str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    int length = i;

    // Check for palindrome
    for(i = 0, j = length - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
