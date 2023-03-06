#include <iostream>
#include <limits>
#include <map>
#include <string>

void InputOnlyNum()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
template <class T> T rateElectricity(T kilo_watt)
{
    const int under_50 = 610;
    const int upper_100 = 720;
    const int upper_200 = 830;
    const int under_300 = 940;
    const int upper_300 = 1050;

    if (kilo_watt < 50)
    {
        return kilo_watt * under_50;
    }
    else if (kilo_watt <= 100)
    {
        return kilo_watt * upper_100;
    }
    else if (kilo_watt <= 200)
    {
        return kilo_watt * upper_200;
    }
    else if (kilo_watt <= 300)
    {
        return kilo_watt * under_300;
    }
    else if (kilo_watt > 300)
    {
        return kilo_watt * upper_300;
    }
    else
    {
        throw std::runtime_error("undefined condition");
    }
}

int main()
{
    int old_read = 0;
    int new_read = 0;
    float bill = 0;

    std::cout << "Input Old Electricity Read: ";
    while (!(std::cin >> old_read))
    {
        std::cout << "Input Old Electricity Read: ";
        InputOnlyNum();
    }

    std::cout << "New Electricity Read: ";
    while (!(std::cin >> new_read))
    {
        std::cout << "New Electricity Read: ";
        InputOnlyNum();
    }
    std::cout << "\n";

    bill = rateElectricity<float>(new_read);
    std::cout << "Last read of your Electricity: " << old_read << "\n";
    std::cout << "New read of your Electricity: " << new_read << "\n";
    std::cout << "Your bill: " << bill << " Riel";
}
