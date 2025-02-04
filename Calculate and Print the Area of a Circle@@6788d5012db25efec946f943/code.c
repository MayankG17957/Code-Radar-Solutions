#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float rad;
    scanf("%f",&rad);
    float area = 3.14 * (rad * rad);
    printf("%.2f",area);
    // printf("%s", welcome());
    return 0;
}