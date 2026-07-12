#include<iostream>
using namespace std;
int main()
{
    int num,i,a,n,sum=0,som=0;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        else
        {
            som+=i;
        }
    }
    cout<<"odd sum:"<<som;
    cout<<"\n"<<"even sum:"<<sum;
    return 0;
}