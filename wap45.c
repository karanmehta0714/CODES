#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 2, denominator = 3;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series = %.2lf\n", sum);
    return 0;
}
