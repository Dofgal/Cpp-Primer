#include <iostream>
#include <string>

using std::string, std::cin, std::cout, std::endl;

int main()
{
    string a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "Equal strings." << endl;
    }
    else
    {
        cout << "Unequal strings, the larger one: ";
        if (a > b) cout << a;
        else cout << b;
        cout << endl;
    }

    return 0;
}