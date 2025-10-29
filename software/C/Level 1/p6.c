#include<stdio.h>
int main()
{
 char name[20];
 int roll_no,no_of_attend,total_class,r;
 
    scanf("%s %d %d %d",&name,&roll_no,&total_class,&no_of_attend);
  
    r=no_of_attend*100/total_class;

if(no_of_attend<=0)
{
    printf("invalid total no of class");
}
else if(total_class<no_of_attend)
{
   printf("number of class attend cannot be grater than the total class\n");
}
else if(total_class<=0)
{
    printf("Invalid total number of class");
}
else
{
    printf("attendance percentage:%d\n",r);
}
    return 0;
}