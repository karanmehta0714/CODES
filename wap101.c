#include <stdio.h>

int main() {
    int nums[100], n, target;
    int i, first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    for (i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    if (first == -1)
        printf("-1 -1\n");
    else
        printf("%d %d\n", first, last);

    return 0;
}
