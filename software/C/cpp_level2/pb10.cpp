#include<iostream>
using namespace std;
int main()
{
    int num,i,a,n=0;
    cin>>num;
    if(num<0)
    {
        cout<<"invalid input";
    }
    for(i=1;i<=num;i++)
    {
        a=i*i;
        n+=a;
    }
    cout<<n;
    return 0;
}