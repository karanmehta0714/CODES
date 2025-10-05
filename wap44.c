#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (2.0 * i - 1) / (2.0 * i);
    }

    printf("Sum of the series = %.2lf\n", sum);
    return 0;
}
