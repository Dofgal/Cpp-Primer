#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item itemSum, currItem;
    std::string isbn;

    if (std::cin >> currItem)
    {
        itemSum = currItem;
        isbn = currItem.isbn();

        while (std::cin >> currItem)
        {
            if (isbn == currItem.isbn())
            {
                itemSum += currItem;
                isbn = currItem.isbn();
            }
            else
            {
                std::cout << "ISBN of the books didn't match." << std::endl;
                return -1;
            }
        }
    }

    std::cout << itemSum << std::endl;

    return 0;
}
