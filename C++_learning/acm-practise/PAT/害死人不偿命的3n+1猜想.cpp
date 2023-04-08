// 1001 害死人不偿命的(3n+1)猜想
#include <iostream>
using std::cin;
using std::cout;

bool isodd(int a)
{
    if (a % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int cnt = 0;
    int num;
    cin >> num;
    while (num != 1)
    {
        if (isodd(num))
        {
            num = (num * 3 + 1) / 2;
            cnt++;
        }
        else
        {
            num /= 2;
            cnt++;
        }
    }
    cout << cnt;
}