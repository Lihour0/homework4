#include <iomanip>
#include <iostream>
#include <limits>

void InputOnlyNum()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

template <class T> T sum(T a, T b)
{
    return a + b;
}

int main()
{
    char op;
    float a, b;
    float ans;
    std::cout << "Enter Number you want to sum\n";
    std::cout << "Ex : 2+3 = 5\n";
    while (!(std::cin >> a >> op >> b))
    {
        InputOnlyNum();
    }

    switch (op)
    {
    case '+':
        ans = sum<float>(a, b);
        std::cout << "sum = " << ans;
        break;
    default:
        std::cout << "Invalid operation";
        break;
    }
}