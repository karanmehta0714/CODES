#include <stdio.h>

int main() {
    int arr[100], n;
    int totalSum = 0, leftSum = 0;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("-1\n");
    return 0;
}
