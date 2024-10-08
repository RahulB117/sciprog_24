#include<stdio.h>
#include<math.h>

int main() {
    float a = 0;
    float b = 60;
    int N = 12;
    int i;

    float b_rad = (M_PI*b)/180;
    float sum = tan(a) + tan(b_rad);

    for(i = 5; i < 60; i=i+5){
        sum = sum + 2*tan(i*M_PI/180);
    }
    sum = ((b_rad - a) / (2*N))*sum;

    printf("The value of sum is %f\n", sum);
    printf("The value of log(2) is %f\n", logf(2));

    float abs_diff = fabs(sum - logf(2));
    float real_diff = fabs(1 - (sum/logf(2)));

    printf("abs_diff = %f\nreal_diff = %f\n", abs_diff, real_diff);
    return 0;
}