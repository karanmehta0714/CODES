#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int roll;
    float marks;
    int n;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
