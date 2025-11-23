#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[100000];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int k;
    if (scanf("%d", &k) != 1) return 0;

    if (k <= 0 || k > n) {
        printf("\n");
        return 0;
    }

    int q[100000], head = 0, tail = 0;
    int first = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) q[tail++] = i;
        if (i >= k - 1) {
            while (head < tail && q[head] < i - k + 1) head++;
            if (!first) printf(" ");
            if (head < tail) printf("%d", arr[q[head]]);
            else printf("0");
            first = 0;
        }
    }

    printf("\n");
    return 0;
}
