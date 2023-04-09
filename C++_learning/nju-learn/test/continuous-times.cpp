#include<iostream>
int main()
{
    int currval,val;
    std::cin>>currval;
    int cnt=1;
    while(std::cin>>val)
    {
        if(currval==val)
        {
            cnt++;
        }
        else
        {
            std::cout<<currval<<" occured "<<cnt<<" times"<<std::endl;
            currval=val;
            cnt=1;
        }
    }
    std::cout<<val<<" occured "<<cnt<<" times"<<std::endl;
    return 0;
}
