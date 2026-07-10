#include<iostream>
using namespace std;
int main()
{
    int num1,num2,a,i,sum=0;
    cin>>num1>>num2;
    a=num1;
    for(i=1;i<=num2;i++)
    {
        cout<<num1;
        if(i!=num2)
        {
            cout<<"+";
        }
        sum+=num1;
        num1=num1*10+a;
    }
    return 0;
}