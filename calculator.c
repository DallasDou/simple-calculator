#include <stdio.h>

//  Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(){
    double a, b, result;
    int c;

    printf("This is a simple calculator program. Please choice an operation:\n1: Add\n2: Subtract\n3: Multiply\n4: Divide\n");
    scanf("%d", &c);
    
    //  Checks if choice input is valid.
    if (c >= 5 || c<=0){
        printf("Invalid input. Enter a valid operation (1-4)");
        return 0;}
    printf("Please enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    
    //  If choice is valid:
    //  Program determines which operation was selected and prints result of the operations.
    if (c==1){
    result = add(a, b);
    printf("Result: %lf", result);}
    
    if (c==2){
    result = subtract(a, b);
    printf("Result: %lf", result);}
    
    if (c==3){
    result = multiply(a, b);
    printf("Result: %lf", result);}
    
    if (c==4){
    result = divide(a, b);
    printf("Result: %lf", result);}
    
    return 0;
}

// Function logic
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
        printf("Error: Division by zero.\n");   // Checks for error by 0
        return 0;
    }
}
