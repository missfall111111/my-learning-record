//用迭代器编写二分查找算法
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::vector;
int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9};

    vector<int>::iterator low=arr.begin();
    vector<int>::iterator high=arr.end();
    int key;
    cin>>key;
    while(low<=high)
    {
        vector<int>::iterator mid=low+(high-low)/2;
        if(*mid>key)
        {
            high=mid-1;
        }
        else if(*mid<key)
        {
            low=mid+1;
        }
        else
        {
            cout<<"The "<<key<<"at the "<<mid-arr.begin()+1;
            return 0;
        }
    }
        cout<<"Not found!";
        return 0;
}
