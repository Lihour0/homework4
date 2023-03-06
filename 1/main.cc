#include <cmath>
#include <complex>
#include <iostream>
#include <limits>

void InputOnlyNum()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

template <class T> T discrim(T a, T b, T c)
{
    return b * b - 4 * a * c;
}
template <class T> void findQuadraticRoot(T a, T b, T c)
{
    T x1, x2, discriminant;

    discriminant = discrim<float>(a, b, c);

    T sqrt_val = sqrt(abs(discriminant));

    if (discriminant > 0)
    {
        x1 = (-b + sqrt_val) / (2 * a);
        x2 = (-b - sqrt_val) / (2 * a);
        std::cout << "x1 = " << x1 << "\n"
                  << "x2 = " << x2;
    }
    else if (discriminant < 0)
    {
        x1 = -b / (2 * a);
        x2 = sqrt_val / (2 * a);
        std::cout << "Roots are complex number\n";
        std::cout << "x1 = " << x1 << "+" << x2 << "i"
                  << "\n";
        std::cout << "x2 = " << x1 << "-" << x2 << "i";
    }
    else if (discriminant == 0)
    {
        x1 = -b / (2 * a);
        std::cout << "Roots are the same\n";
        std::cout << "x1 = x2 =" << x1;
    }
    else
    {
        throw std::runtime_error("error");
    }
}

int main()
{
    float a, b, c;
    std::cout << "Ex: x^2 + 2x - 1 \n a = 1, b = 2, c = -1\n Enter the coefficients a, b and c respectively: ";

    while (!(std::cin >> a >> b >> c))
    {
        InputOnlyNum();
        std::cout << "Input num only";
    }

    findQuadraticRoot(a, b, c);
}
