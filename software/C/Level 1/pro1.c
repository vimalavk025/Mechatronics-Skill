#include<stdio.h>
int main()
{
    int salary;
    char gender;
    float bonus;
    scanf("%d" ,&salary);
    scanf("%c\n" ,&gender);

    if(gender!='M' && gender!='F')
    {
        printf("Gender should be M for Male and F for Female");
        return 0;
    }
    
    if(salary<=0)
        {
            bonus=0;
        printf("bonus=%.2f",bonus);
        }

    else if(salary<25000)
         {
            bonus=5000;
         }

    else if(salary>=25000 && salary<50000)
        {
            bonus=7500;
        }

    else if(salary<=50000)
        {
            if(gender=='M')
            {
                bonus=salary*0.10;
            }
            else if(gender=='F')
            {
            bonus=salary*0.15;
            }
        }
    printf("Bonus=rs. %.2f\n",bonus);
    
    return 0;
}
