#include <stdio.h>

int main() {
    int n, temp, digit, i;
    int count[10] = {0};
    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n < 0) n = -n;
    temp = n;

    while(temp != 0) {
        digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    int maxCount = count[0], maxDigit = 0;
    for(i = 1; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most (%d times)\n", maxDigit, maxCount);
    return 0;
}
