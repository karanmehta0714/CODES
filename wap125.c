#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], line[200];

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(line, sizeof(line), stdin);

    fputs(line, fp);

    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}
