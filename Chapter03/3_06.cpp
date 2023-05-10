#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string orig = "abcdefg";

    for (char &c : orig)
    {
        c = 'X';
    }
    cout << orig << endl;

    return 0;
}