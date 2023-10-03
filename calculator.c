#include <stdio.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

void main(){
    double a, b result;

    scanf("%lf %lf\n", &a, &b);
    result = add(a,b);
    printf("Result: %lf\n", result);

    result = subtract(a,b);
    printf("Result: %lf\n", result);

    result = multiply(a,b);
    printf("Result: %lf\n", result);

    result = divide(a,b);
    printf("Result: %lf\n", result);
    
}


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}