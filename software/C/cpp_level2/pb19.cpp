#include<iostream>
using namespace std;
int main()
{
    int num,i,sum=0,a,count=0,temp;
    cin>>num;
    for(i=num+1;count<=5;i++)
    {
      temp=i;
      sum=0;
       while(temp!=0)
       {
        a=temp%10;
        sum=sum*10+a;
        temp=temp/10;
       }
       
       if(i==sum)
       {
        cout<<i<<"\n";
        count++;
       }
    }

    return 0;
}