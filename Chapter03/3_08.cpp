#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string orig = "abcdefg";
    decltype(orig.size()) index = 0;

    while (index < orig.size())
    {
        orig[index] = 'X';
        ++index;
    }
    cout << orig << endl;

    orig = "abcdefg";
    for (index = 0; index < orig.size(); ++index)
    {
        orig[index] = 'X';
    }
    cout << orig << endl;

    return 0;
}