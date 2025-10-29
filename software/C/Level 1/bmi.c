#include<stdio.h>
int main()
{
    float weight;
    float height;
    float bmi;

    scanf("%f",&weight);
    scanf("%f",&height);
    
    if(weight<0 || height<0)
    {
        printf("Invalid");
        return 0;
    }

    bmi=weight/height*height;

    if(bmi<=2.5)
        { 
            printf("%f \n",bmi);

            printf("Under Weight\n");

        }
    
        else if(bmi<=5.5)
        {
            printf("%.2f \n",bmi);
            printf("Normal weight\n");
        }

        else if(bmi>=5.6)

        {  
            printf("%f \n",bmi);
            printf("Over weight\n");
        }
    
    
    return 0;
}