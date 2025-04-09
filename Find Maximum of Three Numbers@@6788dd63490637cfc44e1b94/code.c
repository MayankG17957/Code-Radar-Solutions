// Your code here...
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && c < b) {
        printf("%d\n", b);
    } else if (b < c && a < c) {
        printf("%d\n", c);
    } else {
        printf("%d\n", a);
    }

    return 0;
}
