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
    vector<string> text = {"The second expression is interpreted as a request to fetch the empty member from the object named it.", "However, it is an iterator and has no member named empty.", "Hence, the second expression is in error.", "", "To simplify expressions such as this one, the language defines the arrow operator"};
    for (auto str = text.begin(); str != text.end() && !str->empty(); ++str)
    {
        for (auto chr = str->begin(); chr != str->end(); ++chr)
            *chr = toupper(*chr);
        cout << *str << endl;
    }

    return 0;
}
