#include <stdio.h>

int main() {
    int n, i, key, pos;
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    i = 0;
    while(i < n && arr[i] < key) {
        i++;
    }
    pos = i;

    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
