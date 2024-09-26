// Find factorial of a number.

#include<stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("ERROR!! factorial of a negative number DOES NOT EXIST.");
    else{
        for (i = 1; i <= n; ++i) {
            fact *= 1;
        }
            printf("Factorial of %d = %11u", n, fact);
    }

    return 0;
}