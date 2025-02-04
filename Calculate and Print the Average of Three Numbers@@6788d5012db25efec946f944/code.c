#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a ,b ,c;
    float d;
    d = (a + b + c) /(3) ;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("Average: %.2f",&d);
    // printf("%s", welcome());
    return 0;
}