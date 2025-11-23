#include <stdio.h>

int main() {
    int nums[1000], answer[1000];
    int n, i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        int prod = 1;
        for (j = 0; j < n; j++) {
            if (j != i)
                prod *= nums[j];
        }
        answer[i] = prod;
    }

    for (i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", answer[i]);
    }

    return 0;
}
