#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    float daily_bill;
    float total_money=0;
    int cnt=0;

    while(cin>>daily_bill)
    {
        cnt++;
        cout<<"The "<<cnt<<"th day's cost is "<<daily_bill<<endl;
        total_money+=daily_bill;
    }
    cout<<"The sum of this month is:"<<total_money<<endl;
}
