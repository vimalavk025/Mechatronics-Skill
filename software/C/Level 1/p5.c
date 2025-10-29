#include <stdio.h>
int main()
{
    char name,gender;
    int age;
    scanf("%c %d %d",&name &age &gender);
    if(gender!=1 && gender!=2)
    {
        print("please enter a valid age");
        return 0;
    }

   else if(age>=18)
    {
        printf("eligiblity status:eligible");
    }
    else if(age>18)
    {
        printf("eligiblity status:not eligible");
        printf("\n salutation:none(or handle as per system design)");
    }
    else if(gender==1)
    {
        print("salutation:mr.%C" &name);
    }
    else if(gender==2)
    {
        printf("salutation:ms.%c" &name);
    }
    return 0;
}
