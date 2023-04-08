// 1002 写出这个数
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::to_string;
int main()
{
    string input;
    cin >> input;
    int sum = 0;
    string chinese[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    for (int i = 0; i < input.length(); i++)
    {
        sum += (input[i] - '0');
    }
    string num = to_string(sum);
    for (int i = 0; i < num.length(); i++)
    {
        cout << chinese[num[i] - '0'];
        if (i != num.length() - 1)
        {
            cout << " ";
        }
    }
}