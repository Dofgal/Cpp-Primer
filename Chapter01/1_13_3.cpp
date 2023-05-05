#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    std::cout << "Integers between " << v1 << " and " << v2 << " are: " << std::endl;

    int curr = v1;
    if (v1 > v2)
    {
        for (int curr = v1; curr >= v2; --curr)
            std::cout << curr << std::endl;
    }
    else
    {
        for (int curr = v1; curr <= v2; ++curr)
            std::cout << curr << std::endl;
    }

    return 0;
}