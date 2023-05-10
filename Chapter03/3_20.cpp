#include <iostream>
#include <vector>
#include <string>

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

    auto n = read.size();
    decltype(n) i = 0;
    for (; i < n - 1; ++i)
    {
        cout << read[i] + read[i + 1] << " ";
    }
    cout << endl;

    for (i = 0; i < n / 2; ++i)
    {
        cout << read[i] + read[n - 1 - i] << " ";
    }
    if (n % 2 == 1)
        cout << read[n / 2];
    cout << endl;

    return 0;
}