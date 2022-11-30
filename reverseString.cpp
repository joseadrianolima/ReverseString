#include <iostream>
#include <string>
using namespace std;

string reverseString(string str)
{
    int strLen = str.length();
    for (int i = 0; i < strLen / 2; ++i)
    {
        swap(str[i], str[strLen - i - 1]);
    }
    return str;
}
int main()
{
    string str;
    cout << "Enter the string to start function." << endl;
    cin >> str;
    cout << "Reverse is " << reverseString(str) << endl;
    return 0;
}
