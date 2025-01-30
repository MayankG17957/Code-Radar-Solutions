#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    float b;
    float c = a * b;
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Product: %f",c);
    return 0;
}