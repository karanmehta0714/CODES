#include <stdio.h>

int main() {
    enum Month {
        JAN = 1, FEB, MAR, APR, MAY, JUN,
        JUL, AUG, SEP, OCT, NOV, DEC
    };

    int days[] = {
        0,   // dummy (index 0 unused)
        31,  // JAN
        28,  // FEB
        31,  // MAR
        30,  // APR
        31,  // MAY
        30,  // JUN
        31,  // JUL
        31,  // AUG
        30,  // SEP
        31,  // OCT
        30,  // NOV
        31   // DEC
    };

    for (int m = JAN; m <= DEC; m++) {
        printf("Month %d has %d days\n", m, days[m]);
    }

    return 0;
}
