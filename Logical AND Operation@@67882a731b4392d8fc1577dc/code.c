#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a > 0 && b > 0){
        printf("True");
    }else {
        printf("False");
    }
    // printf("%s", welcome());
    return 0;
    // printf("%s", welcome());
    // return 0;
}