#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char day[10];

    printf("Enter a day of the week: ");
    scanf("%s", day);                      // for array, '&' sign is not used because day[0] --> can also be written as &day(0).

    for (int i = 0; day[i]; i++) {
        day[i] = tolower(day[i]);
    }

    switch (day[0]) {
        case 's':
            if (strcmp(day, "saturday") == 0 || strcmp(day, "sunday") == 0) {
                printf("Enjoy!! It's a holiday.\n");
            } else
                printf("So sad, you got work to do.\n");
        break;

        case 'm':
        case 't':
        case 'w':
        case 'r':
        case 'f':
                if (strcmp(day, "monday") == 0 ||
                    strcmp(day, "tuesday") == 0 ||
                    strcmp(day, "wednesday") == 0 ||
                    strcmp(day, "thursday") == 0 ||
                    strcmp(day, "friday") == 0) {
                        printf("So sad, you got work to do.\n");
                    } else{
                        printf("INVALID INPUT or UNEXPECTED DAY\n");
                    }
                break;

                default:
                printf("INVALID INPUT or UNEXPECTED DAY\n");
                break;
    }

    return 0;
}