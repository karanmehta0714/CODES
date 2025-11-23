#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[100000];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int k;
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("\n");
        return 0;
    }

    int dq[100000];
    int head = 0, tail = 0;
    int first = 1;

    for (int i = 0; i < n; i++) {
        while (head < tail && arr[dq[tail - 1]] <= arr[i]) tail--;
        dq[tail++] = i;
        if (dq[head] <= i - k) head++;
        if (i >= k - 1) {
            if (!first) printf(" ");
            printf("%d", arr[dq[head]]);
            first = 0;
        }
    }

    printf("\n");
    return 0;
}
