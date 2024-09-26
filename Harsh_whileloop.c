#include <stdio.h>

int main() {
    int n;
    int fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
    printf("\nFactorial of a negative integer DOES NOT EXIST!\n");
    return 1;
    }

    while (n > 0) {
    fact *= n;
    n--;
    }

    printf("Factorial is %d", fact);
    return 0;
}