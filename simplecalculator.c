#include<stdio.h>

int main(){
    float x,y;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
   
    char operator;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            printf("Result: %.2f\n", x + y);
            break;
        case '-':
            printf("Result: %.2f\n", x - y);
            break;
        case '*':
            printf("Result: %.2f\n", x * y);
            break;
        case '/':
            if (y != 0) {
                printf("Result: %.2f\n", x / y);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}