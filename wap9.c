#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    // Input values
    printf("Enter Principal: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Display results
    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
