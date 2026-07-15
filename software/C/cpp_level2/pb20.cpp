#include<iostream>
using namespace std;
int main()
{
    int num,start=1,i,j,k;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<start+j<<" ";
        }
        for(k=i-2;k>=0;k--)
        {
            cout<<start+k<<" ";
        }
        start=start+i;
        cout<<"\n";
    }
    return 0;
}