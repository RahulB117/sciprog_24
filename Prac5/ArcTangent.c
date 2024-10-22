#include <stdio.h>
#include <math.h>

double artanh1(float x, float delta) {
    float sum = 0.0;
    float x_term = x;
    int n = 1;

    while (fabs(x_term) > delta) {
        sum += x_term;
        n += 2;
        x_term = pow(x, n) / n;
    }
    return sum;
}

float artanh2(float x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}

// Function to compare two methods and print results to 10 significant figures
void compare_methods(float delta) {
    float x1[181], x2[181], x = -0.9;
    int index = 0;

    printf("%-10s %-20s %-20s %-20s\n", "x", "artanh1 (Maclaurin)", "artanh2 (Logarithms)", "Difference");

    while (x <= 0.9) {
        x1[index] = artanh1(x, delta);
        x2[index] = artanh2(x);
        double difference = fabs(x1[index] - x2[index]);

        // Print results with 10 significant figures
        printf("%-10.2lf %-20.10lf %-20.10lf %-20.10lf\n", x, x1[index], x2[index], difference);

        x += 0.01;
        index++;
    }
}

int main() {
    double delta;
    printf("Enter the precision value (delta): ");
    scanf("%lf", &delta);
    compare_methods(delta);
    return 0;
}