#include <stdio.h>

void fibonacci(int *first, int *second) {
    int temp_var = *first + *second;
    *second = *first;
    *first = temp_var;
}

int main() {
    int n, a = 1, b = 0;

    printf("Enter the value of limit n: ");
    scanf("%d", &n);

    printf("%d %d ", b, a);
    for (int i = 2; i < n; i++) {
        fibonacci(&a, &b);
        printf("%d ", a); 
    }
    return 0;
}