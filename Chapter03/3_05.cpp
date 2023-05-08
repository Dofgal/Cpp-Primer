#include <iostream>
#include <string>

using std::string, std::cin, std::cout, std::endl;

int main()
{
    string total, sub;

    while (cin >> sub)
    {
        total += sub;
    }
    cout << total << endl;

    return 0;
}