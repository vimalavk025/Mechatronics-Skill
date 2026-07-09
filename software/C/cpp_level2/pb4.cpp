#include<iostream>
using namespace std;
int main()
{
    int num,i,n,count=0,digit,j;
    cin>>num;
    for(i=num+1;count<=5;i++)
    {
         digit=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                digit=1;
            }
        }
        if(digit==0)
        {
                cout<<i<<"\n";
            count+=1;
        }

    }
    return 0;
}
