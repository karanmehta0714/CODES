#include <stdio.h>

int main() {
    int arr[1000], n, i, j, prev;

    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        prev = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        if (i != 0) printf(",");
        printf("%d", prev);
    }

    printf("\n");
    return 0;
}
