#include<iostream>
using namespace std;
int main()
{
    int num,count,a,i,sum=0;
    cin>>num;

    if((num%400==0)||((num%4==0)&&(num%100!=0)))
    {
      cout<<num<<"is a leap year";
    }
    else
    {
        cout<<"\n not a leap year";
    }
    for(i=num+1;i<=num+10;i++)
    {
        if((i%400==0)||((i%4==0)&&(i%100!=0)))
        {
            sum+=1;
        }
        a=10-sum;
    }
    cout<<"\n leap years are"<<sum;
    cout<<"\n"<<"non leap years are"<<a;
    return 0;
}