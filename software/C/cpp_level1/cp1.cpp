#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num;
    cin>>num;
    cout<<"the given number is:"<<fixed<<setprecision(2)<<num;
    return 0;
}