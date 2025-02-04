#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
     int a, b, c;  // Declare integer variables
    float d;      // Declare float variable for the average

    // Read inputs
    // printf("Enter three integers:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    // Calculate the average
    d = (a + b + c) / 3.0;  // Use 3.0 to ensure floating-point division

    // Print the result
    printf("Average: %.2f\n", d);  // Use the variable directly, not its address

    return 0;
}