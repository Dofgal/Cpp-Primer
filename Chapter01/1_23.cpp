#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item prevItem, currItem;
    int cnt = 0;

    if (std::cin >> currItem)
    {
        prevItem = currItem;
        ++cnt;

        while (std::cin >> currItem)
        {
            if (prevItem.isbn() == currItem.isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout << prevItem.isbn() << " has " << cnt << " transaction records." << std::endl;
                prevItem = currItem;
                cnt = 1;
            }
        }

        std::cout << prevItem.isbn() << " has " << cnt <<  " transaction records." << std::endl;
    }
    
    return 0;
}
