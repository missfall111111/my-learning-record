#include<iostream>
int main()
{
    int sum=0,val=50;
    while(val<=100)
    {
        sum+=val;
        val++;
    }
    std::"The sum of 50 to 100 is"<<val<<std::endl;
    return 0;
}
