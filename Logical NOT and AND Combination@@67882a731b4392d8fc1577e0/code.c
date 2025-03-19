#include <stdio.h>

int main() {
    int num1, num2;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (!((num1 >= 0) || (num2 >= 0))) {
        printf("Both numbers are less than zero.\n");
    } else {
        printf("Both numbers are NOT less than zero.\n");
    }

    return 0;
}
