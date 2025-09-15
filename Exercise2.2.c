#include <stdio.h>

int main() {
    int a, b, c, largest;

    // Input three numbers
    printf("Enter three integers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Use nested ternary operator to find the largest
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Output the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
