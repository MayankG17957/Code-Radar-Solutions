#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b;
    // int c = a + b;

    scanf("%d",&a);
    scanf("%d",&b);
    int c = a + b;
    printf("Sum: %d",c);
    return 0;
}