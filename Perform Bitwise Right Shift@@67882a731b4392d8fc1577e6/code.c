#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
       int a , b;
    scanf("%d %d",&a, &b);
    printf("%d",a >> b);
    // printf("%s", welcome());
    return 0;
    // printf("%s", welcome());
    // return 0;
}