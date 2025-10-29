#include<stdio.h>
int main()
{
    int age,days;
    char gender;

    scanf("%d %c %d",&age,&gender,&days);

    if(age<18 || age>40)
    {
        printf("Invalid age\n");
        return 0;
    }
    if(age>=18 && age<30)
    {
        if(gender=='M')
        {
            printf("%d\n",days*700);
        }
        else if(gender=='F')
        {
            printf("%d\n",days*750);
        }

    }
    if(age>=30 && age<40)
    {
        if(gender=='M')
        {
            printf("%d\n",days*800);
        }
        else if(gender=='M')
        {
            printf("%d\n",days*850);
        }
    }
    return 0;
}