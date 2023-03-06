#include <iostream>
#include <limits>
#include <map>
#include <string>

void InputOnlyNum()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
void menuOp(int op)
{
    switch (op)
    {
    case 1:
        std::cout << "Data Entry";
        break;
    case 2:
        std::cout << "Show Data";
        break;
    case 3:
        std::cout << "Search Data";
        break;
    case 4:
        std::cout << "Update Data";
        break;
    case 5:
        std::cout << "Delete Data";
        break;
    case 6:
        std::cout << "Exit";
        break;
    default:
        std::cout << "Invalid Operation";
    }
}

int main()
{
    int op;
    std::map<int, std::string> menu{{1, "Data Entry"},  {2, "Show Data"},   {3, "Search Data"},
                                    {4, "Update Data"}, {5, "Delete Data"}, {6, "Exit"}};

    for (const auto &i : menu)
    {
        std::cout << i.first << ". " << i.second << "\n";
    }

    std::cout << "\nPlease choose the menu [1-6]: ";
    std::cin >> op;
    menuOp(op);
}