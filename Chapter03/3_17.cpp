#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string r;
    vector<string> read;

    while (cin >> r) 
    {
        read.push_back(r);
    }

    for (auto &s : read)
    {
        for (auto &c : s)
        {
            c = toupper(c);
        }
        cout << s << endl;
    }

    return 0;
}