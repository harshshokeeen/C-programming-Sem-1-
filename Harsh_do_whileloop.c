#include <stdio.h>

int a;
int b;
int choice;
int main() {
    do {
        printf("Welcome to the CALCULATOR!\n");
        printf("Select an option (1 to 3): \n");
        printf("1.) Addition of two numbers.\n");
        printf("2.) Subtraction of two numbers.\n");
        printf("3.) Exit the program.\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("You have seleted [1.) Addition of two numbers.]\n");
                printf("Enter any value of a: \n");
                scanf("%d", &a);
                printf("Enter any value of b: \n");
                scanf("%d", &b);
                printf("The value of addition of %d and %d is %d\n", a, b, a+b);
                
            break;

            case 2:
                printf("You have seleted [2.) Subtraction of two numbers.]\n");
                printf("Enter any value of a: \n");
                scanf("%d", &a);
                printf("Enter any value of b: \n");
                scanf("%d", &b);
                printf("The value of subtraction of %d and %d is %d\n", a, b, a-b);
            break;

            case 3:
                printf("Thank you for using our program.\n");
            break;

            default:
                printf("INVALID CHOICE!!\n", "Please select a valid choice (1 to 3).\n");
            break;
        }
    } while(choice != 3);

    return 0;
}