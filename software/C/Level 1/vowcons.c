#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);

    if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u')
    {
        printf("The given alphabet is a vowel\n");
    }
    else 
    {
        printf("The given alphabet is a consonant\n");
    }
    return 0;
}