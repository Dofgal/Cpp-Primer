#include <iostream>
#include <string>

// Comma-separated list in using-declaration only available with c++17
// cl /EHcs /std:c++17 3_02.cpp
using std::string, std::cin, std::cout, std::endl;

int main()
{
    string s;
    while (getline(cin, s))
    {
        if (!s.empty())
        {
            cout << "Previous input: " << s << endl;
        }
    }

    return 0;
}