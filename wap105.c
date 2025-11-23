#include <stdio.h>

int main() {
    int nums[100], n, i, count, candidate, freq = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    candidate = nums[0];
    count = 1;

    for (i = 1; i < n; i++) {
        if (nums[i] == candidate)
            count++;
        else {
            count--;
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }
    }

    for (i = 0; i < n; i++)
        if (nums[i] == candidate)
            freq++;

    if (freq > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
