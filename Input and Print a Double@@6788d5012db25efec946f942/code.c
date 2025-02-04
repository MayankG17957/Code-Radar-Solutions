#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double num1;
    scanf("%lf",&num1);
    printf("You entered: %.4f", num1);
    // printf("%s", welcome());
    return 0;
}