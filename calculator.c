#include <stdio.h>

double add(double a, double b);
double subtract(double a, double b);

void main(){
    double a, b result;

    scanf("%lf %lf\n", &a, &b);
    result = add(a,b);
    printf("Result: %lf\n", result);

    result = subtract(a,b);
    printf("Result: %lf\n", result);





    
}


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}
