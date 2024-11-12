#include <stdio.h>
#include <stdlib.h>

int iterativeGCD(int a, int b);
int recursiveGCD(int a, int b);

int main() {
    int output1, output2 = 0;
    int a, b, error = 0;
    printf("Enter two positive integars a and b:\n");
    scanf("%d %d", &a, &b);
    if (a<=0 || b<=0) {
        printf("Please enter only positive integars for a and b\n");
        return 1;
    }
    output1 = iterativeGCD(a, b);
    printf("iterativeGCD = %d\n", output1);

    output2 = recursiveGCD(a, b);
    printf("recursiveGCD = %d\n", output2);
    return 0;
}
int iterativeGCD(int a, int b) {
    int temp = 0;
    while (b!=0) {
        temp = b;
        b = a%b;
        a = temp;    
    }
    return a;
}
int recursiveGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return recursiveGCD(b, a%b);
    }
}