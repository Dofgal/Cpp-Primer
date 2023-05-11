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
    for (auto iter = v1.cbegin(); iter != v1.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << "\n====" << endl;

    vector<int> v2(10);
    cout << "v2 size: " << v2.size() << endl;
    for (auto iter = v2.cbegin(); iter != v2.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << "\n====" << endl;

    vector<int> v3(10, 42);
    cout << "v3 size: " << v3.size() << endl;
    for (auto iter = v3.cbegin(); iter != v3.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << "\n====" << endl;

    vector<int> v4{10};
    cout << "v4 size: " << v4.size() << endl;
    for (auto iter = v4.cbegin(); iter != v4.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << "\n====" << endl;

    vector<int> v5{10, 42};
    cout << "v5 size: " << v5.size() << endl;
    for (auto iter = v5.cbegin(); iter != v5.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << "\n====" << endl;

    vector<string> v6{10};
    cout << "v6 size: " << v6.size() << endl;
    for (auto iter = v6.cbegin(); iter != v6.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << "\n====" << endl;

    vector<string> v7{10, "hi"};
    cout << "v7 size: " << v7.size() << endl;
    for (auto iter = v7.cbegin(); iter != v7.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << "\n====" << endl;

    return 0;
}