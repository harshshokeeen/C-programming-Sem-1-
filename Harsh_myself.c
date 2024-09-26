#include<stdio.h>

int main()
{
    printf("Hello\n");
    int age = 18;
    printf("My age is %d\n", age);
    float height = 6.1;
    printf("My height is %.1f\n", height);
    char grade = 'A';
    printf("My grade is %c\n", grade);
    printf("My age is %d & height is %.1f and got grade %c\n", age, height, grade);
    return(0);
}