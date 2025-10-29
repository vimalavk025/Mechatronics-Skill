#include<stdio.h>
int main()
{ 
    char name[20];
    int age;
    int gender;

    scanf("%s",name);
    scanf("%d",&age);
    scanf("%d",&gender);

    if(gender!=1 && gender!=2)
    {
        printf("\n type a valid gender");
        return 0;
    }
    
    if(age<18)
    {
        printf("\n not eligible");
    }

   else if(age>=18 && age<=100)
    {
        printf("\n eligible");
    }
    else if(age>100)
    {
        printf("not fit to survive");
    }
    return 0;
}
    

