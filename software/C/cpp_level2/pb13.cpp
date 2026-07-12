#include<iostream>
using namespace std;
int main()
{
    int num,a,n,sum=1,i,j;
    cin>>num;

    for(i=1;i<=num;i++)
     {
        for(j=1;j<=i;j++)
        {
            cout<<sum;
            sum+=1;
        }
        cout<<"\n";
     }
     return 0;
}