#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char chat;
    scanf("%c",&chat);
    printf("You entered: %c",chat);
    return 0;
}