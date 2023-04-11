#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::vector;
using std::endl;
int main()
{
    int score;
    vector<int> step(11,0);
    vector<int>::iterator p=step.begin();
    while(cin>>score)
    {
      //  *(p+score/10)++; this is wrong!
    //  (*(p+score/10))++; this is right!
    ++*(p+score/10); // this is right !
    }

    for(int a:step)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
