#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {

    int num;
    scanf("%d",&num);
    printf("Hexadecimal: %X",num);
    printf("Octal: %o",num);
    // printf("%s", welcome());
    return 0;
}