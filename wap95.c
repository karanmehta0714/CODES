#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200], concat[400];
    int len1, len2;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (len1 != len2) {
        printf("Not a rotation.\n");
        return 0;
    }

    
    strcpy(concat, s1);
    strcat(concat, s1);

    if (strstr(concat, s2) != NULL)
        printf("Second string is a rotation of first.\n");
    else
        printf("Not a rotation.\n");

    return 0;
}
