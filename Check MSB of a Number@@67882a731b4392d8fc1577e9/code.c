#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a & 1){
        printf("Not Set");
    }else{
        printf("Set");
    }
    // printf("%s"/\, welcome());
    return 0;
}