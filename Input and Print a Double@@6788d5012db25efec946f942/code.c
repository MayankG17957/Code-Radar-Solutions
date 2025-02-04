#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num1;
    scanf("%f",&num1);
    printf("You entered: %.4f", num1);
    // printf("%s", welcome());
    return 0;
}