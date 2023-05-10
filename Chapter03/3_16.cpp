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
    vector<int> v1;
    cout << "v1 size: " << v1.size() << endl;
    for (auto v : v1)
    {
        cout << v << " ";
    }
    cout << "\n====" << endl;

    vector<int> v2(10);
    cout << "v2 size: " << v2.size() << endl;
    for (auto v : v2)
    {
        cout << v << " ";
    }
    cout << "\n====" << endl;

    vector<int> v3(10, 42);
    cout << "v3 size: " << v3.size() << endl;
    for (auto v : v3)
    {
        cout << v << " ";
    }
    cout << "\n====" << endl;

    vector<int> v4{10};
    cout << "v4 size: " << v4.size() << endl;
    for (auto v : v4)
    {
        cout << v << " ";
    }
    cout << "\n====" << endl;

    vector<int> v5{10, 42};
    cout << "v5 size: " << v5.size() << endl;
    for (auto v : v5)
    {
        cout << v << " ";
    }
    cout << "\n====" << endl;

    vector<string> v6{10};
    cout << "v6 size: " << v6.size() << endl;
    for (auto v : v6)
    {
        cout << v << " ";
    }
    cout << "\n====" << endl;

    vector<string> v7{10, "hi"};
    cout << "v7 size: " << v7.size() << endl;
    for (auto v : v7)
    {
        cout << v << " ";
    }
    cout << "\n====" << endl;

    return 0;
}