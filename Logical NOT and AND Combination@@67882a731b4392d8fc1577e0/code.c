#include <stdio.h>

int main() {
    int num1, num2;

    // Take input from the user
    scanf("%d %d", &num1, &num2);

    // Condition to check if neither number is greater than zero
    if (!(num1 > 0 || num2 > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

