#include<stdio.h>

int num1, num2, sum;
int main()
{
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    sum = num1+num2;
    printf("Sum of %d+%d = %d", num1, num2, sum);
    return(0);
}