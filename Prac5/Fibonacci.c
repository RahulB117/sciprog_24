#include <stdio.h>
#include <stdlib.h>

void fibonacci(int *first, int *second) {
    int temp_var = *first + *second;
    *second = *first;
    *first = temp_var;
}

int main() {
    int n, a = 1, b = 0;

    printf("Enter the value of limit n: ");
    scanf("%d", &n);
        if(n<1) {
        printf("Value of n must be greater than 1");
        exit(1);
    }

    printf("%d %d ", b, a);
    for (int i = 2; i < n; i++) {
        fibonacci(&a, &b);
        printf("%d ", a); 
    }
    return 0;
}