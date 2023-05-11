#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> nums;

    int n = 10;
    while (nums.size() < 10)
    {
        nums.push_back(n);
        n += 10;
    }
    

    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        *it *= 2;
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}