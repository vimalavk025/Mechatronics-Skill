#include <stdio.h>

int main() 
{
    int day;

    printf("Enter a number: ");
    scanf("%d", &day);

    if (day < 1 || day > 7) 
    {
        printf("Invalid input! Please enter 1-7.\n");
    }
    else 
    {
        if (day == 1) {
            printf("Day: Monday - Weekday\n");
        }
        else if (day == 2) {
            printf("Day: Tuesday - Weekday\n");
        }
        else if (day == 3) {
            printf("Day: Wednesday - Weekday\n");
        }
        else if (day == 4) {
            printf("Day: Thursday - Weekday\n");
        }
        else if (day == 5) {
            printf("Day: Friday - Weekday\n");
        }
        else if (day == 6) {
            printf("Day: Saturday - Holiday\n");
        }
        else if (day == 7) {
            printf("Day: Sunday - Holiday\n");
        }
    }

    return 0;
}
