#include <stdio.h>
#include <stdlib.h>

// Calculate the factorial
double factorial(int n) {
    double output = 1.0;
    if (n == 0 || n == 1) {
        return 1.0;
    }
    output = 1.0;
    for (int i = 2; i <= n; i++) {
        output *= i;
    }
    return output;
}

// Calculate e^x for x = 1
double estimate_e(int order) {
    double *terms = (double*) malloc(order * sizeof(double));
    if (terms == NULL) {
        printf("Failed to allocated memory\n");
        exit(1);
    }

    terms[0] = 1.0; // f(x) starts with 1 for x=1

    // Calculate each term in the Taylor series
    double sum = terms[0];
    for (int i = 1; i < order; i++) {
        terms[i] = 1.0 / factorial(i);
        sum += terms[i];
    }

    free(terms);
    return sum;
}

int main() {
    int order;
    printf("Enter the order of the polynomial: ");
    scanf("%d", &order);

    // Iterate from 1st to 15th order
    for (int i = 1; i <= order && i <= 15; i++) {
        double estimate = estimate_e(i);
        printf("Order %d: Estimate of e = %.10f\n", i, estimate);
    }

    // Compare with the actual value of e
    printf("Actual value of e = 2.7182818284\n");
    return 0;
}
