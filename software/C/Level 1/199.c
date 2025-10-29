#include<stdio.h>
int main()
{
 int age;
 
 scanf("%d",&age);

 if(age<0)
 {
    printf("invaliid age");
 }
 else if(age>0 && age<13)
 {
    printf("mashed vegitable or soft fruits is sutable for you");

 }
 else if(age>=13 && age<51)
 {
    printf("burgers and pastha is sutable for you");
 }
 else if(age>=51)
 {
    printf("soup or grilled fish is sutable for you");
 }
 else 
 {
    printf("invalid");
 }
 return 0;

}