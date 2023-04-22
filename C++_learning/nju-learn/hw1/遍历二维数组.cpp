//遍历二维数组 for语句，下标运算符，指针
#include<iostream>

using std::cout;
using std::endl;

int main()
{
    //for语句
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int (&a)[4] :arr)
    {
        for(int b:a)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
}
