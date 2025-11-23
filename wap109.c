#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    long long arr[100000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("0\n");
        return 0;
    }

    long long sum = 0;
    for (int i = 0; i < k; i++) sum += arr[i];
    long long max = sum;

    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];
        if (sum > max) max = sum;
    }

    printf("%lld\n", max);
    return 0;
}
