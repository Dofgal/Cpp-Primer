#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string orig;
    cin >> orig;

    for (char c : orig)
    {
        if (!ispunct(c))
            cout << c;
    }
    cout << endl;

    return 0;
}