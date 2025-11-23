#include <stdio.h>

int main() {
    int arr[100], n, x;
    int i, ans = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ans = i;  
            break;    // first element ≥ x
        }
    }

    printf("%d\n", ans);

    return 0;
}
