#include <stdio.h>

int main() {
    int n, remainder;
    unsigned long long product = 1;
    int hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        remainder = n % 10;
        if(remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        n /= 10;
    }

    if(hasOdd)
        printf("Product of odd digits = %llu\n", product);
    else
        printf("No odd digits present.\n");

    return 0;
}
