#include <stdio.h>

int main()
 {
    int month, days, quadrant;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) 
    {
        printf("Invalid month number!\n");
        return 0;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12)
     {
        days = 31;
    } 
    else if (month == 4 || month == 6 || month == 9 || month == 11)
     {
        days = 30;
    } 
    else {  
        days = 28;
    }
    if (month >= 1 && month <= 3)
        quadrant = 1;
    else if (month >= 4 && month <= 6)
        quadrant = 2;
    else if (month >= 7 && month <= 9)
        quadrant = 3;
    else
        quadrant = 4;

    printf("Month %d has %d days and lies in Quadrant %d of the year.\n", month, days, quadrant);

    return 0;
}
