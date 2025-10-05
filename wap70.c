#include <stdio.h>

int main() {
    int n, k, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n;

    for(i = 0; i < k; i++) {
        temp = arr[n - 1];
        for(j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    printf("Array after rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
