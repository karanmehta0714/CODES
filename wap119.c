#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];
    int seen[1001] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (seen[arr[i]] == 1) { 
            printf("%d\n", arr[i]);
            return 0;
        }

        seen[arr[i]] = 1;
    }

    return 0;
}
