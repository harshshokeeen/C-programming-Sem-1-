#include<stdio.h>
float celsiustofahr (float celsius)
{
    return(celsius*9/5)+32;
}

float fahrtocelsius (float fahr)
{
    return(fahr-32)*5/9;
}
int main()
{
    int choice; 
    float temp, result;
        printf("Temperature Conversion Program");
        printf("\n1.celsius-fahrenhite");
        printf("\n2.fahrenhite-celsius");
        printf("\nEnter your choice (1/2)");
        scanf("%d",&choice);
    
    switch (choice) {
        case 1: 
            printf("Enter temp in C");
            scanf("%f",&temp);
            result = celsiustofahr(temp);
            printf("%2f fahr is %2f celsius", temp, result);

        break;

        case 2: 
            printf("Enter temp in fahr");
            scanf("%f",&temp);
            result = fahrtocelsius(temp);
            printf("%2f fahr is %2f celsius", temp, result);

        break;

        default:
            printf("Wrong Choice");
        break;
    }
    return(0);
}