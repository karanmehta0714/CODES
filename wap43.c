#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while(temp != 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == n)
        printf("%d is a strong number.\n", n);
    else
        printf("%d is not a strong number.\n", n);

    return 0;
}
