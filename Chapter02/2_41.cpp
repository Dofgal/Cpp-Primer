#include <iostream>
#include <string>

struct Sales_data
{
    std::string isbn;
    int saleCnt = 0;
    double price = 0;
};

int main()
{
    Sales_data curr, prev;
    int totalSaleCnt = 0;
    double totalProfit = 0;

    if (std::cin >> curr.isbn >> curr.saleCnt >> curr.price)
    {
        totalSaleCnt = curr.saleCnt;
        totalProfit = curr.saleCnt * curr.price;
        prev = curr;

        while (std::cin >> curr.isbn >> curr.saleCnt >> curr.price)
        {
            if (curr.isbn != prev.isbn)
            {
                if (totalSaleCnt != 0)
                    std::cout << prev.isbn << " " << totalSaleCnt << " " << totalProfit << " "
                              << (double)totalProfit / totalSaleCnt << std::endl;
                else
                    std::cout << prev.isbn << " has no sales." << std::endl;

                prev = curr;
                totalSaleCnt = prev.saleCnt;
                totalProfit = prev.saleCnt * prev.price;
            }
            else
            {
                totalSaleCnt += curr.saleCnt;
                totalProfit += curr.saleCnt * curr.price;
            }
        }

        if (totalSaleCnt != 0)
            std::cout << curr.isbn << " " << totalSaleCnt << " " << totalProfit << " "
                        << (double)totalProfit / totalSaleCnt << std::endl;
        else
            std::cout << curr.isbn << " has no sales." << std::endl;
    }

    return 0;
}