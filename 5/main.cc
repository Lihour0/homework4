#include <iostream>
#include <limits>
#include <map>
#include <string>
#include <vector>
std::map<int, int> holidayPerMonth{{1, 2}, {2, 0}, {3, 1}, {4, 3},  {5, 4},  {6, 1},
                                   {7, 0}, {8, 0}, {9, 1}, {10, 5}, {11, 4}, {12, 0}};
void InputOnlyNum()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
template <class T> void holiday(int op, T &month)
{

    for (const auto &x : holidayPerMonth)
    {
        if (op == x.first)
        {
            if (x.second <= 1)
            {

                std::cout << "There is " << x.second << " holiday in ";
            }
            else if (x.second > 1)
            {

                std::cout << "There is " << x.second << " holidays in ";
            }
            for (const auto &i : month)
            {
                if (op == i.first)
                {
                    std::cout << i.second;
                }
            }
        }
    }
}

int main()
{
    int op;
    std::map<int, std::string> Month{{1, "January"},   {2, "Februrary"}, {3, "March"},     {4, "April"},
                                     {5, "May"},       {6, "June"},      {7, "July"},      {8, "August"},
                                     {9, "September"}, {10, "October"},  {11, "November"}, {12, "December"}};
    std::vector<std::string> vec;
    for (const auto &i : Month)
    {
        std::cout << i.first << ". " << i.second << "\n";
    }

    std::cout << "Please choose month [1-12] to show ceremony day: ";
    while (!(std::cin >> op))
    {
        std::cout << "Please choose month [1-12] to show ceremony day: ";
        InputOnlyNum();
    };
    holiday(op, Month);
}
