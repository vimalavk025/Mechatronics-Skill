#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,temp,fd,ld,md,rs,place=1;
    cin>>num;
temp=num;
if(num>0 && num<10)
{
    cout<<num;
}
    while(temp>=10)
    {
        temp=temp/10;
        place=place*10;
        
    }
    fd=num/place;
    ld=num%10;
    md=(num%place)/10;
    rs=ld*place+md*10+fd;
    cout<<rs;
    return 0;
}