#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    int times;
    cin >> times;
    int cnt = 0;
    while (cnt < times)
    {
        string judge;
        cin >> judge;
        int i = 0;
        for (i; i < judge.length(); i++)
        {
            if (judge[i] != 'P' && judge[i] != 'A' && judge[i] != 'T' && judge[i] != ' ')
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (i == judge.length())
        {
            cout << "YES" << endl;
        }
        cnt++;
    }
}