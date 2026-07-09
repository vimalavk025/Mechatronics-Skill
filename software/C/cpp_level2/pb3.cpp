#include<iostream>
using namespace std;
int main()
{
    int num ,i,n,rev=0;
    cin>>num;
    i=num;
    while(i!=0)
    {
        n=i%10;
        rev=rev*10+n;
        i=i/10;
    }
    cout<<rev;
    return 0;
}
