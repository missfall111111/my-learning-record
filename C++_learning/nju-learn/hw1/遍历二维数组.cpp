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
    //下标运算符
    int row=3,column=4;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //指针
    for(int (*a)[4]=arr;a!=arr+3;a++)
    {
        for(int *b=a[0];b!=a[0]+4;b++)
        {
            cout<<*b<<" ";
        }
        cout<<endl;
    }
}
