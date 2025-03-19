// Your code here...
#include <stdio.h>

int main() {
    int a, b;

    // Taking input for both numbers in a single line
    scanf("%d %d", &a, &b);

    // Print the larger number
    if (a > b) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }

    return 0;
}
