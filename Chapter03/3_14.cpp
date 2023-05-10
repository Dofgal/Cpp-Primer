#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int r;
    vector<int> read;

    while (cin >> r)
    {
        read.push_back(r);
    }

    for (int r : read)
    {
        cout << r << " ";
    }
    cout << endl;

    return 0;
}