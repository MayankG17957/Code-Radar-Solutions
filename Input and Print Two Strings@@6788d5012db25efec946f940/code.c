#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {

    char str[100] , str2[100];
    scanf("%s", str);
    scanf("%s", str2);
    printf("You entered: %s and %s" ,str ,str2);
    // printf("%s", welcome());
    return 0;
}