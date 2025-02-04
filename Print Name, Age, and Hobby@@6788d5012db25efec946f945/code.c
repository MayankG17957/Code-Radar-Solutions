#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100] , str1[100];
    int age;
    scanf("%s", str);
    scanf("%d", & age);
    scanf("%s", str1);
    printf("Name: %s \n Age: %d \n Hobby: %s", str ,age,str1);
    // printf("%s", welcome());
    return 0;
}