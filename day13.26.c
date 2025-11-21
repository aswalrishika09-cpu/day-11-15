#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for the upper limit
    printf("Enter a number (n): ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); // Move to the next line after printing all numbers
    return 0;
}
