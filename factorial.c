#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n <= 1) // Base case: factorial of 0 or 1 is 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
