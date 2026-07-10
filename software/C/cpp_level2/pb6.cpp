#include<iostream>
using namespace std;
int main()
{
    int num,n,i,c,sum=0;
    cin>>num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<"\n"<<sum<<"is is the sum of the divisor"; 
    if(sum==num)
    {
        cout<<"\n"<<num<<"is a equall number";
    }
    else
    {
        cout<<"\n"<<num<<"is not a equall number";
    }
    return 0;
}