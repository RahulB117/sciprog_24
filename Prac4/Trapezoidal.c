#include<stdio.h>
#include<math.h>

#define N 12
float Array_Tan[N + 1];


float degtorad(float degarg);
float area_of_trapezoid(int range, float Array_Tan[], float initial_val, float final_val);

int main() {
    float initial_val = 0;
    float final_val = 60;
    int i;
    float unit_degree;

    for(i=0;i<N;i++) {
        unit_degree=i*5.0;
        Array_Tan[i] = tan(degtorad(unit_degree));
        printf("Array_Tan[%d] = %f\n", i, Array_Tan[i]);
    }
    float area_trapezoid = area_of_trapezoid(N, Array_Tan, initial_val, final_val);

    printf("Calculated area = %f\n", area_trapezoid);
    printf("Actual area = %f\n", log(2.0));

    
    return 0;
}
float degtorad(float degarg) {
    float pi = 3.1415927;
    return ((pi*degarg)/180.0);
}

float area_of_trapezoid(int range, float Array_Tan[N+1], float initial_val, float final_val) {
    float area;
    int i;

    area = Array_Tan[0] + Array_Tan[N+1];
    printf("Initial Area = %f\n", area);
    for(i=0;i<range;i++) {
        area=area+2*Array_Tan[i];
    }
    printf("The value of the sum after calculations is %f\n", area);

    float mult_rad = degtorad((final_val - initial_val)/(2*range));
    area = mult_rad*area;
    return area;
}