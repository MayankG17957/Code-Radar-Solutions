#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    float b;
    scanf("%f",&a);
    scanf("%f",&b);
    float c = a * b;
    printf("Product: %.2f",c);
    return 0;
}