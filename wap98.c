#include <stdio.h>

int main() {
    char name[100];
    int i = 0, lastSpace = -1;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    if (name[0] != ' ' && name[0] != '\n')
        printf("%c. ", name[0]);   

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\n')
            printf("%c. ", name[i+1]);  
    }

    if (lastSpace != -1)
        printf("%s", &name[lastSpace + 1]);

    return 0;
}
