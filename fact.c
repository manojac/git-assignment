#include <stdio.h>

int factorial(int num) {
    if (num < 0) {
        return -1; // Error: Factorial of negative number is not defined
    } else if (num == 0) {
        return 1; // Base case: 0! = 1
    } else {
        return num * factorial(num - 1); // Recursive call
    }
}

int main() {
    int number, result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    result = factorial(number);
    
    if (result == -1) {
        printf("Error: Cannot calculate factorial of a negative number.\n");
    } else {
        printf("Factorial of %d is %d\n", number, result);
    }
    
    return 0;
}
