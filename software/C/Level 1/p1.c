#include<stdio.h>
int main()
{
    int salary;
    char gender;
    
    printf("Enter your salary: ");
    scanf("%d", &salary);
    
    printf("Enter the gender (m/f): ");
    scanf(" %c", &gender);  // space before %c to handle newline
    
    if(salary < 25000)
    {
        printf("Bonus = 5000\n");
    }
    else if(salary > 25000 && salary < 50000)
    {
        printf("Bonus = 7500\n");
    }
    else if(salary == 50000)
    {
        if(gender == 'm' || gender == 'M')
            printf("Bonus = 5000\n");
        else if(gender == 'f' || gender == 'F')
            printf("Bonus = 7500\n");
    }
    else if(salary > 50000)
    {
        if(gender == 'm' || gender == 'M')
            printf("Bonus = %d\n", (int)(salary * 0.10));
        else if(gender == 'f' || gender == 'F')
            printf("Bonus = %d\n", (int)(salary * 0.15));
    }

    return 0;
}
