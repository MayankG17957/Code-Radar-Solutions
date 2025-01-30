#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    float b;
    float c = a * b;
    scanf("%.2f",&a);
    scanf("%.2f",&b);
    printf("Product: %f",c);
    return 0;
}