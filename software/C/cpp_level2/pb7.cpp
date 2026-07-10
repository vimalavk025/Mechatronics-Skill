#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,i,a,c;
    cin>>num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum>num)
    {
        cout<<num<<" is a abudant number";
    }
    else
    {
        cout<<num<<" is not a abudant number";
    }
    return 0;
}