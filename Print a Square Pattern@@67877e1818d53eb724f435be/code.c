// Your code here...
#include <stdio.h>

int main() {
    int n;

    // Get user input for square size
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    // Loop to print the square
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
